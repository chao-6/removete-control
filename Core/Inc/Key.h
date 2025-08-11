#ifndef __KEY_H__
#define __KEY_H__
#include "main.h"

//Key的输出 1-10 0代表无输入
//1左航向
//2右航向
//3一键降落
//4飞机上锁
//5飞机解锁
//6飞机微调左
//7飞机微调下
//8连接启动
//9飞机微调右
//10飞机微调上

extern uint8_t Key_OutputArray;	

void Key_Scanf(void);

#endif

