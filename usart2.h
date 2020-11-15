#ifndef __usart2_H__
#define __usart2_H__

typedef unsigned char BYTE;
typedef unsigned int WORD;

extern unsigned char show_new,num;

void InitUART();
void Uart();
void out_int();
void SendData(BYTE dat);
void SendString(char *s);




#endif