#include<stdio.h>
int main()
{//输入整数个数不确定
   int x,n=0,min,max,s=0;
   //如果输入的数给定了范围，要相应的将最大值和最小值初始化 
   while(scanf("%d",&x)==1)
   {
   	s+=x;
   	if(x<min) min=x;
   	if(x>max) max=x;
   	n++;
	} /*运用scanf的返回值可以解决这个问题
	scanf的返回值是成功输入的变量个数
	当输入结束时，scanf函数无法再读取x,将会返回0 */ 
	printf("%d %d %.3f\n",min,max,(double)s/n);
	return 0; 
} 
/*
scanf的输入格式？空格、TAB、回车都是无关紧要的
结束输入方法：
在Windows下，输入完毕后先按Enter,再按Ctrl+Z,最后再按Enter
在LINUX下，输入完毕后按Ctrl+D即可结束输入*/ 
 
