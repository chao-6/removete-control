#include "main.h"
#include "oled.h"
#include "string.h"


uint8_t lie = 0;

void UI_Init(void)
{
    OLED_Init();//OLED的初始化
    OLED_ColorTurn(0);//反显函数
    OLED_DisplayTurn(0);//屏幕旋转180�????
    OLED_Refresh();//更新显存到OLED	

}

void UI_Start(void)
{

    OLED_Refresh();
    OLED_Clear();
}

void UI_Show(void)
{
    //显示手柄的电量
    OLED_ShowChinese(17,0,32,16,1);//手
    OLED_ShowChinese(33,0,33,16,1);//柄
    OLED_ShowChinese(49,0,34,16,1);//电
    OLED_ShowChinese(65,0,35,16,1);//量
    OLED_ShowNum(91,0,BAT_Percent,2,16,1);//电量的数字
    OLED_ShowChar(107,0,37,16,1);

    //显示飞机的电量
    OLED_ShowChinese(17,17,20,16,1);//飞
    OLED_ShowChinese(33,17,21,16,1);//控
    OLED_ShowChinese(49,17,34,16,1);//电
    OLED_ShowChinese(65,17,35,16,1);//量
    OLED_ShowNum(91,17,BAT_Plane_Percent,2,16,1);//电量的数字
    OLED_ShowChar(107,17,37,16,1);


    //连接飞机的开关
    OLED_ShowChinese(17,35,18,16,1);//连
    OLED_ShowChinese(33,35,19,16,1);//接
    OLED_ShowChinese(49,35,11,16,1);//开
    OLED_ShowChinese(65,35,31,16,1);//关
    OLED_ShowChinese(91,35,31,16,0);//关
    
    if(Transmit_Flag == 0)
    {
       OLED_ShowChinese(91,35,31,16,0);
    }else
    {
        OLED_ShowChinese(91,35,11,16,0);
    }
    
    OLED_Refresh();
}

