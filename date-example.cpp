#include"date-example.h"
int main(void)
{
	Date d1;//对象是类的实例，Date类已经被定义，d1是创建的一个对象 
	d1.SetDate(2018,3,20);
	d1.Print();
	cout<<"is it a leap year"<<d1.isleapyear()<<endl;
	return 0;
}
/*成员函数的类外实现 Date类的声明可以不用具体写出函数的步骤，只用简单的声明即可
 可以把类的声明部分放在头文件，而实现部分放在源文件中*/
 
 /*代码如下：
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
   */
   
   //作用域运算符：：用于标识成员函数属于哪一个类
   //类的声明和成员函数分开写时在成员函数的声明中可以不写出成员函数的参数名，只要声明参数的类型即可
   //如 void SetDate(int,int,int);表示该成员函数需要传递三个整型参数 
