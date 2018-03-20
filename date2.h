/*构造函数：类的一个特殊成员函数，函数名和类名相同，可以有任意类型的参数，但不具有返回类型
 只要创建了新对象，系统会自动调用构造函数 */

/* 还有一点需要注意：
在其他文件如main.cpp在使用StdAfx.h的同时又用到其他函数库时，要注意函数库放的位置
如：
main.cpp:
#include<stdio.h>
#include"StdAfx.h"
.........
运行时会出现错误！！！！原因：
编译器通过一个头文件stdafx.h来使用预编译头文件。编译器认为，所有在指令#include"stdafx.h"前的代码都是预编译的，它跳过#include"stdafx.h"指令，使用projectname.pch编译这条指令之后的所有代码。
因此，所有的MFC实现文件第一条语句都是：#include"stdafx.h"。在它前面的所有代码将被忽略，所以其他的头文件应该在这一行后面被包含。否则，你将会得到“Nosuchfileordirectory”这样让你百思不得其解的错误提示。
所以要把#include"StdAfx.h"放在最前面（下面是正确的形式）
main.cpp:
#include"StdAfx.h"
#include<stdio.h>*/ 

#ifndef _DATE2_H_
#define _DATE2_H_ 
//这个编译预处理语句表示如果没有定义头文件就定义它，直到遇到#endif结束
//它的作用是：防止头文件的重复包含和编译
 

#include<iostream>
using namespace std;

class Date
{
	public:
		Date();//这就是一个构造函数，指针函数，指向类 
		void SetDate(int y,int m,int d);
		int isleapyear();
		void Print();
	private:
	    int year,month,day;
};
#endif



 
