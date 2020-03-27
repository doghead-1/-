#include "reg52.h"
#define uint unsigned int 
#define uchar unsigned char

sbit beep = P2^5;

uchar code SONG_TONE[]={212,212,190,212,159,169,212,212,190,212,142,159,
212,212,106,126,159,169,190,119,119,126,159,142,159,0};
uchar code SONG_LONG[]={9,3,12,12,12,24,9,3,12,12,12,24,
12,3,15,15,15,15,15,12,6,15,15,15,30,0};

//��ʱ����
void DelayMS(uint x)
{
     uchar t;
     while(x--) for(t=0;t<120;t++);
}

//������Ƶ�����ĺ���
void PlayMusic()
{
     uint i=0,j,k;
     while(SONG_LONG[i]!=0||SONG_TONE[i]!=0)
 {   
     for(j=0;j<SONG_LONG[i]*20;j++)  //���Ÿ���������SONG_LONG Ϊ���ӳ���
   {	 beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
   beep=1;
         beep=~beep;
		 
         for(k=0;k<SONG_TONE[i]/3;k++);//SONG_TONE ��ʱ�������ÿ��������Ƶ��
   }
    DelayMS(10);
    i++;
 }
}

void main()
{
    beep=0;
    while(1)
    {
        PlayMusic(); //�������տ���
        DelayMS(500); //���������ͣһ��ʱ��
    }
}
