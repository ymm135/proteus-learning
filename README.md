本仓库的所有内容都是为了更好的学习[自制CPU](https://github.com/ymm135/TD4-4BIT-CPU)而做的知识储备。  
其中包含keil + proteus环境搭建、入门demo、电路元器件及基础知识学习、自制CPU的仿真电路等.
  
#### keil+proteus环境搭建
> 首先proteus程序编写有两种模式，一种是自带的编译器，使用汇编语言，文件后缀asm，编译完成后生成HEX文件。另一种是通过其他IDE比如Keil,使用C语言编写，编译成HEX文件导入proteus。

[Keil软件官网下载地址](https://www.keil.com/download/product/)  
> 注意选择芯片版本,我这里选择C51  

Keil的安装一路Next就行了。接下来安装proteus，找到安装包，需要安装Linsense,要不然找不到模板样式及依赖库，安装完成之后，替换中文语言包即可。  

Keil C51版本V5.5
Proteus版本8.9

#### keil+proteus led流水灯实验 (万事开头难) 

```
流水灯项目
    ├── FlashLED.pdsprj        # proteus项目,版本8.9
    ├── flash-led.md
    └── keil
        ├── FlashLED.uvopt     # keil c51,版本5.5
        ├── FlashLED.uvproj
        ├── Listings
        │   ├── FlashLED.m51
        │   └── flash_led.lst
        └── flash_led.c
```
[点击查看proteus仿真电路创建及keil软件编程说明](./流水灯/flash-led.md)


* 实验一   [LED流水灯实验](./流水灯/flash-led.md)
* 实验二   [单个外部中断实验](./实验2-单个外部中断实验/README.md)
* 实验三   [定时器实验](./实验3-定时器实验/README.md)
* 实验四   [单片机与PC之间串行通信实验]()
* 实验五   [矩阵键盘扫描实验]()
* 实验六   [双单片机通信实验]()
* 实验七   [82C55并行I/O扩展实验]()
* 实验八   [1602液晶显示实验]()
* 实验九   [D/A转换实验]()
* 实验十   [A/D转换实验]()

> 额外增加 实验: [驱动电机](md/驱动电机.md)  
<br>
备注: 部分实验参考: [https://github.com/YAOYUKE/89C51](https://github.com/YAOYUKE/89C51)  

