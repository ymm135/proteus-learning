#include <reg51.h>

void Delay(unsigned int i)  //延迟函数, i位形式参数,不能赋初值
{
	unsigned int j;
	for( ; i > 0; i--)
	for(j=0; j < 125; j--)   // 晶体振荡器位12MHz， j的选择与晶体振荡器频率有关
	{ ; }                     //空函数
}

void main()                 //主函数
{
	TMOD=0x50;                //设置计时器T1的方式1计数
	TH1=0xFF;                 //向TH1写入初值的高8位
	TL1=0xFC;                 //向TL1写入初值的低8位
	EA=1;                   //总中断允许
	ET1=1;                    //定时器T1中断允许
	TR1=1;                    //启动定时器T1
	
	while(1);                 //等待计数中断
}

void T1_int() interrupt 3   //T1中断函数
{
	for(;;)
	{
		P1=0xff;                //8位LED全灭
		Delay(500);
		P1=0;                   //8位LED全亮
		Delay(500);
	}
}

