/*���캯�������һ�������Ա��������������������ͬ���������������͵Ĳ������������з�������
 ֻҪ�������¶���ϵͳ���Զ����ù��캯�� */

/* ����һ����Ҫע�⣺
�������ļ���main.cpp��ʹ��StdAfx.h��ͬʱ���õ�����������ʱ��Ҫע�⺯����ŵ�λ��
�磺
main.cpp:
#include<stdio.h>
#include"StdAfx.h"
.........
����ʱ����ִ��󣡣�����ԭ��
������ͨ��һ��ͷ�ļ�stdafx.h��ʹ��Ԥ����ͷ�ļ�����������Ϊ��������ָ��#include"stdafx.h"ǰ�Ĵ��붼��Ԥ����ģ�������#include"stdafx.h"ָ�ʹ��projectname.pch��������ָ��֮������д��롣
��ˣ����е�MFCʵ���ļ���һ����䶼�ǣ�#include"stdafx.h"������ǰ������д��뽫�����ԣ�����������ͷ�ļ�Ӧ������һ�к��汻�����������㽫��õ���Nosuchfileordirectory�����������˼�������Ĵ�����ʾ��
����Ҫ��#include"StdAfx.h"������ǰ�棨��������ȷ����ʽ��
main.cpp:
#include"StdAfx.h"
#include<stdio.h>*/ 

#ifndef _DATE2_H_
#define _DATE2_H_ 
//�������Ԥ��������ʾ���û�ж���ͷ�ļ��Ͷ�������ֱ������#endif����
//���������ǣ���ֹͷ�ļ����ظ������ͱ���
 

#include<iostream>
using namespace std;

class Date
{
	public:
		Date();//�����һ�����캯����ָ�뺯����ָ���� 
		void SetDate(int y,int m,int d);
		int isleapyear();
		void Print();
	private:
	    int year,month,day;
};
#endif



 
