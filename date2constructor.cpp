#include"date2.h"
Date::Date()
{
	year=2018;
	month=3;
	day=20;
}//������Date��Ĺ��캯�����������ʼ��Ϊ2018��3��8�� 

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
