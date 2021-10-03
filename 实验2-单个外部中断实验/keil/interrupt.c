#include <reg51.h>
#define uchar unsigned char

void Delay(unsigned int i)  //延迟函数, i位形式参数,不能赋初值
{
	unsigned int j;
	for( ; i > 0; i--)
	for(j=0; j < 333; j--)   // 晶体振荡器位12MHz， j的选择与晶体振荡器频率有关
	{ ; }                     //空函数
}

void main()                 //主函数
{
	EA=1;                     //总中断允许
	EX0=1;                    //允许外部中断0中断
	IT0=1;                    //选择外部中断0为跳沿触发方式
	while(1)
	{
		P1=0;                   //P1口的8只LED全亮
	}
}

void int0() interrupt 0 using 1   //外中断0的中断服务函数
{
	uchar m;
	EX0=0;
	for(m=0;m<5;m++)
	{
		P1=0x0f;                   //低4位LED关，高4位LED亮
		Delay(400);
		P1=0xf0;                   //低4位LED亮，高4位LED灭
		Delay(400);
	}
	
	EX0=1;                        //中断返回前， 打开外部中断0中断  
}
