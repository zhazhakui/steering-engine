
/*******************************************************************************
* 函 数 名       : main
* 函数功能		 : 51单片机通过PWM波控制舵机
* 输    入       : 通过按键设置角度
* 输    出    	 : 舵机转固定角度
*******************************************************************************/
// 头文件包含
#include<reg52.h>
#include"time.h"
#include"key.h"
#include"interrput.h" 
void main()

{

	initial(); //初始化

	while(1)

	{

		keyscan(); //等待按键

	}

}