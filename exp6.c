#include<reg51.h>
#include<stdio.h>
#define DIY 1000
#define STEP 260
sfr Port_P2=0xA0;
sbit stepper_D0=P2^7;
sbit stepper_D1=P2^6;
sbit stepper_D2=P2^5;
sbit stepper_D3=P2^4;

void main(){
unsigned int i;
unsigned int j;
Port_P2=0xFF;
while(1){
for(j;j<=STEP;j++){
for(i;i<=DIY;i++)
stepper_D0=0;
stepper_D1=1;
stepper_D2=1;
stepper_D3=1;


for(i;i<=DIY;i++)

stepper_D0=1;
stepper_D1=0;
stepper_D2=1;
stepper_D3=1;


for(i;i<=DIY;i++)
stepper_D0=1;
stepper_D1=1;
stepper_D2=0;
stepper_D3=1;

do{}
while(1);
}}}
