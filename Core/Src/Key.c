#include "gpio.h"
#include "Key.h"

uint8_t Key1_now;//Key1当前值
uint8_t Key1_last;//Key1上一次值

uint8_t Key2_now;
uint8_t Key2_last;

uint8_t Key3_now;
uint8_t Key3_last;

uint8_t Key4_now;
uint8_t Key4_last;


uint8_t Key5_now;
uint8_t Key5_last;

uint8_t Key6_now;
uint8_t Key6_last;

uint8_t Key7_now;
uint8_t Key7_last;

uint8_t Key8_now;
uint8_t Key8_last;

uint8_t Key9_now;
uint8_t Key9_last;

uint8_t Key10_now;
uint8_t Key10_last;

uint8_t Key_OutputArray;	

void Key_Scanf(void)
{
	//Key1
	Key_OutputArray = 0;
	Key1_now = HAL_GPIO_ReadPin(Key1_GPIO_Port,Key1_Pin);
	if(Key1_now == GPIO_PIN_RESET && Key1_last == GPIO_PIN_SET)
	{
		Key_OutputArray = 1;
	}
	Key1_last = HAL_GPIO_ReadPin(Key1_GPIO_Port,Key1_Pin);
	//Key2
	Key2_now = HAL_GPIO_ReadPin(Key2_GPIO_Port,Key2_Pin);
	if(Key2_now == GPIO_PIN_RESET && Key2_last == GPIO_PIN_SET)
	{
		Key_OutputArray = 2;
	}
	Key2_last = HAL_GPIO_ReadPin(Key2_GPIO_Port,Key2_Pin);
	//Key3
	Key3_now = HAL_GPIO_ReadPin(Key3_GPIO_Port,Key3_Pin);
	if(Key3_now == GPIO_PIN_RESET && Key3_last == GPIO_PIN_SET)
	{
		Key_OutputArray = 3;
	}
	Key3_last = HAL_GPIO_ReadPin(Key3_GPIO_Port,Key3_Pin);
	//Key4
	Key4_now = HAL_GPIO_ReadPin(Key4_GPIO_Port,Key4_Pin);
	if(Key4_now == GPIO_PIN_RESET && Key4_last == GPIO_PIN_SET)
	{
		Key_OutputArray = 4;
	}
	Key4_last = HAL_GPIO_ReadPin(Key4_GPIO_Port,Key4_Pin);
	//Key5
	Key5_now = HAL_GPIO_ReadPin(Key5_GPIO_Port,Key5_Pin);
	if(Key5_now == GPIO_PIN_RESET && Key5_last == GPIO_PIN_SET)
	{
		Key_OutputArray = 5;
	}
	Key5_last = HAL_GPIO_ReadPin(Key5_GPIO_Port,Key5_Pin);
	//Key6
	Key6_now = HAL_GPIO_ReadPin(Key6_GPIO_Port,Key6_Pin);
	if(Key6_now == GPIO_PIN_RESET && Key6_last == GPIO_PIN_SET)
	{
		Key_OutputArray = 6;
	}
	Key6_last = HAL_GPIO_ReadPin(Key6_GPIO_Port,Key6_Pin);
	//Key7
	Key7_now = HAL_GPIO_ReadPin(Key7_GPIO_Port,Key7_Pin);
	if(Key7_now == GPIO_PIN_RESET && Key7_last == GPIO_PIN_SET)
	{
		Key_OutputArray = 7;
	}
	Key7_last = HAL_GPIO_ReadPin(Key7_GPIO_Port,Key7_Pin);
	//Key8
	Key8_now = HAL_GPIO_ReadPin(Key8_GPIO_Port,Key8_Pin);
	if(Key8_now == GPIO_PIN_RESET && Key8_last == GPIO_PIN_SET)
	{
		Key_OutputArray = 8;
	}
	Key8_last = HAL_GPIO_ReadPin(Key8_GPIO_Port,Key8_Pin);
	//Key9
	Key9_now = HAL_GPIO_ReadPin(Key9_GPIO_Port,Key9_Pin);
	if(Key9_now == GPIO_PIN_RESET && Key9_last == GPIO_PIN_SET)
	{
		Key_OutputArray = 9;
	}
	Key9_last = HAL_GPIO_ReadPin(Key9_GPIO_Port,Key9_Pin);
	//Key10
	Key10_now = HAL_GPIO_ReadPin(Key10_GPIO_Port,Key10_Pin);
	if(Key10_now == GPIO_PIN_RESET && Key10_last == GPIO_PIN_SET)
	{
		Key_OutputArray = 10;
	}
	Key10_last = HAL_GPIO_ReadPin(Key10_GPIO_Port,Key10_Pin);
}

