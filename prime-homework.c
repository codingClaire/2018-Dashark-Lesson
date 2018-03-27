/*满足下列条件的自然数称为超级素数:
该数本身,所有数字之和,
所有数字之积以及所有数字的平方和都是素数.
例如113就是一个超级素数.求[100,9999]之内:
(1)超级素数的个数.
(2)所有超级素数之和.
(3)最大的超级素数.*/
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
