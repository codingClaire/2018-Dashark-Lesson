//带参数的构造函数
#ifndef _SQUARE_H_
#define _SQUARE_H_

#include<iostream>
using namespace std;

class square
{
	public:
		square(double s);//声明了square类的带参函数 
		double getside();
		double getcircumference;//计算周长 
		double getarea();//计算面积 
		void print();
	private:
	    double side;
};
#endif
