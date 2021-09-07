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
流水灯项目目录
    ├── FlashLED.DSN    # proteus工程
    ├── FlashLED.PWI
    ├── Last\ Loaded\ FlashLED.DBK
    ├── Thumbs.db
    └── flashled.bmp
    ├── Keil            # keil工程
    │  ├── FlashLED
    │  ├── FlashLED.M51
    │  ├── FlashLED.Opt
    │  ├── FlashLED.Uv2
    │  ├── FlashLED.c
    │  └── FlashLED.hex
```
[点击查看proteus仿真电路创建及keil软件编程说明](./流水灯/flash-led.md)
