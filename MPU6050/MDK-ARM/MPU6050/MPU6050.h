#ifndef __MPU6050_H__
#define __MPU6050_H__

#include "main.h"

void mpu_w(uint8_t addr,uint8_t data);
uint8_t mpu_r(uint8_t addr);
void mpu_begin(void);
int16_t mpu_acc_x(void);
int16_t mpu_acc_y(void);
int16_t mpu_acc_z(void);
int16_t mpu_temp(void);
int16_t mpu_gy_x(void);
int16_t mpu_gy_y(void);
int16_t mpu_gy_z(void); 

#endif
