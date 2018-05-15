#include<iostream>
using namespace std;
class A
{
	public:
			A()
			{
				cout<<"A is constructing"<<endl; 
			}
			~A()
			{
				cout<<"A is destructing"<<endl;
			}
	private:
		int a;
 }; 
 class B:public A
 {
 	public:
 			B()
 			{
 				cout<<"B is constructing"<<endl;
			 }
			 ~B()
			 {
			 		cout<<"B is destructing"<<endl;
			 }
    private:
    	int b;
 };
 class C:public B
 {
 	public:
 			C()
 			{
 				cout<<"C is constructing"<<endl;
			 }
			 ~C()
			 {
			 		cout<<"C is destructing"<<endl;
             }
	private:
		int c;
 };
 
 
 int main()
 {
 	A first;
 	B second;
 	C third;
return 0;
 }
 
 /*运行结果
 A is constructing
A is constructing
B is constructing
A is constructing
B is constructing
C is constructing
C is destructing
B is destructing
A is destructing
B is destructing
A is destructing
A is destructing*/ 
