#include"date-example.h"
int main(void)
{
	Date d1;//���������ʵ����Date���Ѿ������壬d1�Ǵ�����һ������ 
	d1.SetDate(2018,3,20);
	d1.Print();
	cout<<"is it a leap year"<<d1.isleapyear()<<endl;
	return 0;
}
/*��Ա����������ʵ�� Date����������Բ��þ���д�������Ĳ��裬ֻ�ü򵥵���������
 ���԰�����������ַ���ͷ�ļ�����ʵ�ֲ��ַ���Դ�ļ���*/
 
 /*�������£�
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
   
   //������������������ڱ�ʶ��Ա����������һ����
   //��������ͳ�Ա�����ֿ�дʱ�ڳ�Ա�����������п��Բ�д����Ա�����Ĳ�������ֻҪ�������������ͼ���
   //�� void SetDate(int,int,int);��ʾ�ó�Ա������Ҫ�����������Ͳ��� 
