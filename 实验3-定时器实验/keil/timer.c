#include <reg51.h>

void Delay(unsigned int i)  //�ӳٺ���, iλ��ʽ����,���ܸ���ֵ
{
	unsigned int j;
	for( ; i > 0; i--)
	for(j=0; j < 125; j--)   // ��������λ12MHz�� j��ѡ���뾧������Ƶ���й�
	{ ; }                     //�պ���
}

void main()                 //������
{
	TMOD=0x50;                //���ü�ʱ��T1�ķ�ʽ1����
	TH1=0xFF;                 //��TH1д���ֵ�ĸ�8λ
	TL1=0xFC;                 //��TL1д���ֵ�ĵ�8λ
	EA=1;                   //���ж�����
	ET1=1;                    //��ʱ��T1�ж�����
	TR1=1;                    //������ʱ��T1
	
	while(1);                 //�ȴ������ж�
}

void T1_int() interrupt 3   //T1�жϺ���
{
	for(;;)
	{
		P1=0xff;                //8λLEDȫ��
		Delay(500);
		P1=0;                   //8λLEDȫ��
		Delay(500);
	}
}

