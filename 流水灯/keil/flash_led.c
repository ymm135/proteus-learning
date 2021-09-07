#include<reg51.h>
#include<intrins.h>

//ÑÓ³Ùº¯Êý
void DelayMS(unsigned int x)
{
	unsigned char i;
	while(x--)
		for(i=0; i < 120; i++); //¾§ÕñÎª12Mhz
}

int main()
{
	P0 = 0xFE;
	while(1)
	{
		DelayMS(250);
		P0 = _crol_(P0, 1); //Ñ­»·×óÒÆ
	}
}