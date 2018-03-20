#include"date2.h"
Date::Date()
{
	year=2018;
	month=3;
	day=20;
}//定义了Date类的构造函数，将对象初始化为2018年3月8日 

void Date::SetDate(int y,int m,int d)
   {
      year=y;
	  month=m;
	  day=d;
   }
   int Date::isleapyear()
   {
   	return(year%4==0&&year%100!=0)||(year%400==0);
   }
   void Date::Print()
   {
	cout<<year<<"nian"<<month<<"yue"<<day<<"ri";
   }
