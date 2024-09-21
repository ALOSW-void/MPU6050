#ifndef __MPU6050_H__
#define __MPU6050_H__

#define ERROR_MPU_INIT      -1
#define ERROR_SET_SENSOR    -2
#define ERROR_CONFIG_FIFO   -3
#define ERROR_SET_RATE      -4
#define ERROR_LOAD_MOTION_DRIVER    -5
#define ERROR_SET_ORIENTATION       -6
#define ERROR_ENABLE_FEATURE        -7
#define ERROR_SET_FIFO_RATE         -8
#define ERROR_SELF_TEST             -9
#define ERROR_DMP_STATE             -10

#define DEFAULT_MPU_HZ  100
#define Q30  1073741824.0f

int MPU6050_DMP_init(void);
int MPU6050_DMP_Get_Date(float *pitch, float *roll, float *yaw);

#endif /* INC_MPU6050_H_ */
//#ifndef __MPU6050_H__
//#define __MPU6050_H__

//#include "main.h"

//void mpu_w(uint8_t addr,uint8_t data);
//uint8_t mpu_r(uint8_t addr);
//void mpu_begin(void);
//int16_t mpu_acc_x(void);
//int16_t mpu_acc_y(void);
//int16_t mpu_acc_z(void);
//int16_t mpu_temp(void);
//int16_t mpu_gy_x(void);
//int16_t mpu_gy_y(void);
//int16_t mpu_gy_z(void); 

//#endif
