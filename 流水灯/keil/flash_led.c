#include<reg51.h>
#include<intrins.h>

//�ӳٺ���
void DelayMS(unsigned int x)
{
	unsigned char i;
	while(x--)
		for(i=0; i < 120; i++); //����Ϊ12Mhz
}

int main()
{
	P0 = 0xFE;
	while(1)
	{
		DelayMS(250);
		P0 = _crol_(P0, 1); //ѭ������
	}
}