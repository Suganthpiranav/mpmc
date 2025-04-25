#include <reg51.h>
sbit LED1=P0^0;
sbit LED2=P0^1;
sbit SW1=P2^0;
sbit SW2=P2^1;
void main(){
while(1){
	if(SW1==1){
		LED1=1;}
	else{
		LED1=0;}
while(1){
	if(SW2==1){
		LED2=1;}
	else{
		LED2=0;}
	}}}
	

