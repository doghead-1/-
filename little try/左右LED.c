#include "reg52.h" //���ļ��ж����˵�Ƭ����һЩ���⹦��

#include<intrins.h>		//��ΪҪ�õ������ƺ��������Լ������ͷ�ļ�

typedef unsigned int u16; //���������ͽ�����������
typedef unsigned char u8;

u8 KeyValue;

sbit k1=P3^1; //����P31 ����k1
sbit k2=P3^0;
sbit k3=P3^2;
sbit k4=P3^3;
#define led P2

void delay(u16 i)
{
while(i--);
}

int keypros()
{

if(k1==0) //��ⰴ��K1 �Ƿ���
{
delay(1000); //��������һ���Լ10ms
if(k1==0) //�ٴ��жϰ����Ƿ���
{
KeyValue=1; //led ״̬ȡ��
}
while(!k1);
 //��ⰴ���Ƿ��ɿ�
}

if(k2==0) //��ⰴ��K1 �Ƿ���
{
delay(1000); //��������һ���Լ10ms
if(k2==0) //�ٴ��жϰ����Ƿ���
{
KeyValue=2; //led ״̬ȡ��
}
while(!k2);
 //��ⰴ���Ƿ��ɿ�
}

}

void main()
{

led=~0x7F;
while(1)
{
keypros(); //����������
	
	
	 //��Լ��ʱ450ms	
	if(KeyValue==1)
	{

			led=_crol_(led,1);
			delay(1000);
			
			}
			delay(100);
			//KeyValue=0;
		if(KeyValue==2)
	{

			led=_cror_(led,1);
			delay(1000);
			
			}
			delay(100);
			KeyValue=0;
}
}