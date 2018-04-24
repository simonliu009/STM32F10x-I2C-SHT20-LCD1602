/**
	************************************************************
	************************************************************
	************************************************************
	*	文件名： 		i2c-lcd.h
	*
	*	作者： 		刘知海 SimonLiu
	*
	*	日期： 		2018-4-22
	*
	*	版本： 		V1.0
	*
	*	说明： 		基于网络例程修改，来源 http://controllerstech.com/wp-content/uploads/2018/02/LCD-I2C.zip
	*				增加lcd_setCursor,lcd_clear，lcd_backlight, lcd_noBacklight命令
	*	修改记录：
	************************************************************
	************************************************************
	************************************************************
**/
#ifndef _I2CLCD_H_
#define _I2CLCD_H_

#include "stm32f1xx_hal.h"

void lcd_init (void);   // LCD初始化

void lcd_send_cmd (char cmd);  // 向LCD发送命令

void lcd_send_data (char data);  // 向LCD发送单字节数据

void lcd_send_string (char *str);  // 向LCD发送字符串

void lcd_setCursor(char col,char row); //设置LCD光标位置

void lcd_clear(void); //LCD清屏

//void lcd_backlight(void); //打开背光
//
//void lcd_noBacklight(void); //关闭背光

#endif
