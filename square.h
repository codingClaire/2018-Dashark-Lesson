//�������Ĺ��캯��
#ifndef _SQUARE_H_
#define _SQUARE_H_

#include<iostream>
using namespace std;

class square
{
	public:
		square(double s);//������square��Ĵ��κ��� 
		double getside();
		double getcircumference;//�����ܳ� 
		double getarea();//������� 
		void print();
	private:
	    double side;
};
#endif
