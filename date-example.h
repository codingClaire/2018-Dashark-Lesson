#include<iostream>
using namespace std;

class Date//类的名字是日期(Date) 
{
	public://成员函数或数据成员的声明 
		void SetDate(int y,int m,int d)//相当于接口，将形参传递到实参 
		{
			year=y;
			month=m;
			day=d;
		}
		int isleapyear()//函数，判断是不是闰年，如果满足就return 1 
		{
			return(year%4==0&&year%100!=0)||(year%400==0);
		}
		void Print()//定义一个函数，函数的功能就是输出年月日 
		{
			cout<<year<<"nian"<<month<<"yue"<<day<<"ri";
		}
	private://数据成员，列为私有成员是因为类的数据必须是封装的，不能随便让类外的其他函数来存取，保护数据的安全性 
		int year;
		int month;
		int day;
};
//将对象的属性抽象成为数据成员，将对象的行为抽象成成员函数，并对它们进行封装就形成了类
//注意，在类体中只能声明数据成员的数据类型和名称，不允许对其进行初始化 
//先声明类的行为（成员函数），后声明类的属性（数据成员） 
