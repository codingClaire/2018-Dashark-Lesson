/*����������������Ȼ����Ϊ��������:
��������,��������֮��,
��������֮���Լ��������ֵ�ƽ���Ͷ�������.
����113����һ����������.��[100,9999]֮��:
(1)���������ĸ���.
(2)���г�������֮��.
(3)���ĳ�������.*/
#include<stdio.h> 
#include<math.h>
int sum_bit(int num) {
	int sum;
	if(num/1000==0)
	{
		int g,s,b;
		b=num/100;
		s=(num-b*100)/10;
		g=num-100*b-10*s;
		sum=b+s+g;
	}
	else
	{
		int g,s,b,q;
		q=num/1000;
		b=(num-q*1000)/100;
		s=(num-q*1000-b*100)/10;
		g=num-q*1000-b*100-s*10;
		sum=q+b+g+s;
    } 
  return sum;
}


int multi_bit(int num) {
    int multi;
	if(num/1000==0)
	{
		int g,s,b;
		b=num/100;
		s=(num-b*100)/10;
		g=num-100*b-10*s;
		multi=b*s*g;
	}
	else
	{
		int g,s,b,q;
		q=num/1000;
		b=(num-q*1000)/100;
		s=(num-q*1000-b*100)/10;
		g=num-q*1000-b*100-s*10;
		multi=q*b*g*s;
    } 
    return multi;
}


int square_sum_bit(int num) {
    double square;
    square=sqrt(int sum_bit(int num));
  
  return square;

}



bool isprime(int num) {

  return false;

}



int main() {

  if(isprime(113)&&isprime(sum_bit(113))&&isprime(multi_bit(113))&&isprime(square_sum_bit(113)))

    //to do sth

}
