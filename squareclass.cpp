#include"square.h"
square::square(double s)//构造函数，square类里的一个带参构造函数
{
	side=s;
} 
 double square::getside()//类型 类：：函数名（）注意最后不用加分号 
 {
 	return side;
 }
 double square::getcircumference() 
 {
 	return 4*side;
 }
 double square::getarea()
 {
 	return side*side;
 }
 void square::print()
 {
 	cout<<"the square whose side is"<<side<<"has the circumference of"<<4*side<<",and the area of"<<side*side<<endl; 
    
 }
