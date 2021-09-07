基于Keil+Proteus流水灯实验,适合零基础的同学。(<font face="黑体" color="#FFFF00">项目代码在根目录</font>), 也可以参照
[视频讲解](https://www.bilibili.com/video/BV1dv411h7vL?from=search&seid=6190284922334573491&spm_id_from=333.337.0.0)  

成果展示
![](./../res/video/LED流水灯展示视频.gif)

#### Proteus流水灯工程
创建工程
![](./../res/res-led-pro-1.png)

选择元器件(Pick图标),双击选中:
* AT89C51
* LED 
* 220R 电阻
  
![AT89C51](./../res/res-led-pro-3.png)
![LED](./../res/res-led-pro-4.png)
![220R](./../res/res-led-pro-5.png)

1. 把元器件放到布局中，可以进行旋转、设置文本(右击编辑属性)，进行连线。等到电子与LED连接一组后，选中组，使用块复制，复制8组。
2. 在侧边栏选择总线模式,连接总线，需要转弯的地方，先单击停止，再按住Ctrl连接目标点。把单片机的P0与LED都连接到总线上。
3. 在侧边栏选择终端模式>>POWER,放置电源,把电阻的一端连接到电源正极，电流的流向如下:
   > ![电流流向](./../res/res-led流水灯实验电流流向.png)
4. 使用属性分配工具给线编号. 字符串为: NET=# 。这个#计数器,把起始值设置为1，增值设为1。设置完P0的标号，重置起始值为1，设置LED线标号.
   > ![属性赋值工具](./../res/res-pro-属性赋值工具.png)

仿真电路图
![](./../res/res-仿真电路图.png)

#### Keil流水灯工程
首选创建工程
![创建工程](./../res/res-led-keil-1.png)
接下来都是默认选项，完成界面是  
![创建工程](./../res/res-led-keil-2.png)
  
选择单片机
![](./../res/res-led-keil-2.png)

选择No，不拷贝
![](./../res/res-led-keil-3.png)

创建文件并保存为.c
![](./../res/res-led-keil-7.png)
  
![](./../res/res-led-keil-6.png)

设置输出为hex文件
![](./../res/res-led-keil-8.png)

flash_led.c文件
```
#include<reg51.h>
#include<intrins.h>

//延迟函数
void DelayMS(unsigned int x)
{
	unsigned char i;
	while(x--)
		for(i=0; i < 120; i++); //晶振为12Mhz
}

int main()
{
	P0 = 0xFE;
	while(1)
	{
		DelayMS(250);
		P0 = _crol_(P0, 1); //循环左移
	}
}
```

把编译好hex文件导入到proteus程序中
![](./../res/res-pro-选择hex文件.png)


  
***
  
Tips:
  
Keil查看单片机参数
![](./../res/res-led-keil-10.png)

Keil中文注释乱码问题
![](./../res/res-led-keil-9.png)

Proteus中颜色点
> 在仿真图中,不同颜色的点所代表的意思: 红点--高电平 蓝点--低电平 黄点--短路 箭头--交流电瞬时电流方向