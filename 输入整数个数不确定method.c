#include<stdio.h>
int main()
{//��������������ȷ��
   int x,n=0,min,max,s=0;
   //���������������˷�Χ��Ҫ��Ӧ�Ľ����ֵ����Сֵ��ʼ�� 
   while(scanf("%d",&x)==1)
   {
   	s+=x;
   	if(x<min) min=x;
   	if(x>max) max=x;
   	n++;
	} /*����scanf�ķ���ֵ���Խ���������
	scanf�ķ���ֵ�ǳɹ�����ı�������
	���������ʱ��scanf�����޷��ٶ�ȡx,���᷵��0 */ 
	printf("%d %d %.3f\n",min,max,(double)s/n);
	return 0; 
} 
/*
scanf�������ʽ���ո�TAB���س������޹ؽ�Ҫ��
�������뷽����
��Windows�£�������Ϻ��Ȱ�Enter,�ٰ�Ctrl+Z,����ٰ�Enter
��LINUX�£�������Ϻ�Ctrl+D���ɽ�������*/ 
 
