#include <reg51.h>
#define uchar unsigned char

void Delay(unsigned int i)  //�ӳٺ���, iλ��ʽ����,���ܸ���ֵ
{
	unsigned int j;
	for( ; i > 0; i--)
	for(j=0; j < 333; j--)   // ��������λ12MHz�� j��ѡ���뾧������Ƶ���й�
	{ ; }                     //�պ���
}

void main()                 //������
{
	EA=1;                     //���ж�����
	EX0=1;                    //�����ⲿ�ж�0�ж�
	IT0=1;                    //ѡ���ⲿ�ж�0Ϊ���ش�����ʽ
	while(1)
	{
		P1=0;                   //P1�ڵ�8ֻLEDȫ��
	}
}

void int0() interrupt 0 using 1   //���ж�0���жϷ�����
{
	uchar m;
	EX0=0;
	for(m=0;m<5;m++)
	{
		P1=0x0f;                   //��4λLED�أ���4λLED��
		Delay(400);
		P1=0xf0;                   //��4λLED������4λLED��
		Delay(400);
	}
	
	EX0=1;                        //�жϷ���ǰ�� ���ⲿ�ж�0�ж�  
}
