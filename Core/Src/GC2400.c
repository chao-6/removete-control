#include "main.h"
#include "Key.h"
#include "usart.h"
#include "string.h"


 /*
     GC2400发送信息给飞控
     1.油门的量
     2.遥杆的量（包括两个轴上的）
     3.10个按键的按下信息
 */
 uint8_t Voltage_Vaule_Buff[6] = {0};//用来拆分16位电压的中间array
 uint8_t Usart_Pack[10] = {0};//用来整体打包所有信息的数组
 void GC2400_Tram(uint16_t Voltage_Vaule[4],uint8_t Key_OutputArray)
 {
     //拆分16位的电压值
     Voltage_Vaule_Buff[0] = (uint8_t)(Voltage_Vaule[0]>>8);//横滚
     Voltage_Vaule_Buff[1] = (uint8_t)(Voltage_Vaule[0]);
     Voltage_Vaule_Buff[2] = (uint8_t)(Voltage_Vaule[1]>>8);//俯仰
     Voltage_Vaule_Buff[3] = (uint8_t)(Voltage_Vaule[1]);
     Voltage_Vaule_Buff[4] = (uint8_t)(Voltage_Vaule[2]>>8);//油门
     Voltage_Vaule_Buff[5] = (uint8_t)(Voltage_Vaule[2]);
    
     //打包Voltage_Vaule和Key_OutputArray,发送Usart_Pack给飞控
     Usart_Pack[0] = 0xAA;
     Usart_Pack[1] = 0x0C;
     for (uint8_t i = 0; i < 6; i++)
     {
        Usart_Pack[i+2] = Voltage_Vaule_Buff[i];
     }
     Usart_Pack[8] = Key_OutputArray;
     Usart_Pack[9] = 0xFF;
     HAL_UART_Transmit_DMA(&huart1,Usart_Pack,10);
}

