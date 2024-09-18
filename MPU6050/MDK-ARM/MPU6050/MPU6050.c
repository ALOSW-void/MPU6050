#include "MPU6050.h"
#include "i2c.h"

#define mpu_addr 0xD0
//���MPU6050��غ�����д
void mpu_w(uint8_t addr,uint8_t data)//д
{
	HAL_I2C_Mem_Write(&hi2c1, mpu_addr, addr, 1, &data, 1, HAL_MAX_DELAY);
}
uint8_t mpu_r(uint8_t addr)//��
{
	uint8_t data;
	HAL_I2C_Mem_Read(&hi2c1, mpu_addr,addr, 1, &data, 1, HAL_MAX_DELAY);
	return data;
}
void mpu_begin(void)//��ʼ��
{
	if(mpu_r(0x75)==0x68)//���
	{
		mpu_w(0x1B,0x18);//�Ľ��ٶ�����
		mpu_w(0x1C,0x10);//�ļ��ٶ�
		mpu_w(0x6B,0x01);//��˯�ߣ���ʱ�ӵ�G
	}
}
//X,Y,Z������ʱ��Ҫ���
int16_t mpu_acc_x(void) //x������Ӧ
{
	int16_t x=0;
	x=mpu_r(0x3B)<<8;
	x=x|mpu_r(0x3C);
	return x;
}
int16_t mpu_acc_y(void) //y������Ӧ
{
	int16_t y=0;
	y=mpu_r(0x3D)<<8;
	y=y|mpu_r(0x3E);
	return y;
}
int16_t mpu_acc_z(void) //z������Ӧ
{
	int16_t z=0;
	z=mpu_r(0x3F)<<8;
	z=z|mpu_r(0x40);
	return z;
}
int16_t mpu_temp(void) //�¶�
{
	int16_t t=0;
	t=mpu_r(0x41)<<8;
	t=t|mpu_r(0x42);
	return t;
}
int16_t mpu_gy_x(void) //x���ٶ�
{
	int16_t x=0;
	x=mpu_r(0x43)<<8;
	x=x|mpu_r(0x44);
	return x;
}
int16_t mpu_gy_y(void) //y���ٶ�
{
	int16_t y=0;
	y=mpu_r(0x45)<<8;
	y=y|mpu_r(0x46);
	return y;
}
int16_t mpu_gy_z(void) //z���ٶ�
{
	int16_t z=0;
	z=mpu_r(0x47)<<8;
	z=z|mpu_r(0x48);
	return z;
}
