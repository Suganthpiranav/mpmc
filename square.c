#include<stdio.h>
#include<reg51.h>
sbit Pin=P1^0;
void main(void){
P1=0x00;
TMOD=0x01;
loop: 
	TL0=0XAF;
	TH0=0x3C;
	Pin=1;
	TR0=1;
	while (TF0==0){}
	TL0=0XDC;
	TH0=0x3C;
	Pin=0;
	while (TF0==0){}
goto loop;
	}
