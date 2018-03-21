#include"square.h"
int main(void)
{
	square square1(20.6); //创建对象，在创建的时候系统调用构造函数用实参初始化了side
	square1.print();//直接调用print（）成员函数输出，不直接调用成员函数，printf既能方便地访问对象私有数据成员又能在输出流中插入表达式 
	return 0; 
}
