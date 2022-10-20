#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>


//预处理
//
//翻译环境
//编译器（cl.exe）链接器（link.exe）





int main()
{


	return 0;
}

//编译器：
// 
//预处理阶段：
//预处理完成的（文本工作）
//1.完成了头文件的包含
//#include
//2.完成#define的符号和宏的替换（编译和汇编阶段已经没有宏）
//3.注释删除

//编译阶段：（.s）
//把C语言代码转化成汇编代码
//1.语法分析
//2.词法分析
//3.语义分析
//4.符号汇总


//汇编阶段：（目标文件.obj）
//把汇编代码转化成机器指令（二进制指令）
//1.生成符号表
//test.o--这个文件是elf格式--readelf工具


//链接器：
// 
//链接阶段：
//把多个目标文件和链接库进行链接
//1.合并段表
//2.符号表的合并和重定位


//执行环境：
//#

//预处理详解：

//宏和函数的
//


//#undef 取消宏定义

//命令行定义 --linux

//条件编译
//#if--#endif   #ifdef--#endif  



//文件包含
//<库>、 "本地"
//本质是查找路径不同

//嵌套文件包含
// 
// 防止多次包含头文件
//1.#pragma once   只包含一次

//2,#ifndef __TEST_H__
//#define __TEST_H__
// 
// 
//#endif

//《C语言深度解剖》