#include"square.h"
square::square(double s)//���캯����square�����һ�����ι��캯��
{
	side=s;
} 
 double square::getside()//���� �ࣺ������������ע������üӷֺ� 
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
