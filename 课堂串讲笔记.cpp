#include<iostream>
#include<string.h> 
#include<fstring> 
class Student
{
   public:
   	
   	   //student():name("N\A"),id(0) ����string�Ĺ��캯�� 
   	   student():id(0)//�������id ��ֵ ȱʡֵ  
		 {
		 }
		 Student(char name[],int id)��id(id) //���캯��û�з��� û��void  
		 //����name û�г�ʼ����ִ��ʱ�ͻ�����
		  
		 {                          //����id  ��ʼ��id  :this->id(id) 
		 	this->id=id;
		    strcpy(this->name,name);//��ʼ�� Ҫ��ͷ�ļ� 
		  //��� ������id �ұ��βε�id   ���� ��Ϊ��id ����const ���������޸ĳ�Ա����  
		  //constɾ������ 
		  
		  this->name=this->name+"XXX";//��name�������һ���ַ��� this ��ʾ���Ƕ����name 
		 }
		 /*��������*/ 
		 
		 Student(const Student &obj)��id(obj.id) //id��ʼ�� ��һ������obj��Ϊ�����Ĳ��� obj���id ��ֵ����ǰ�Ķ����id 
		 {
		 	std::cout<<"something"<<std::endl;
		 }
		 void show() const
		 {
		 }
		 ~Student()
		 {
		 	
		 }
		 void show() const//�����const��ʾshow�����ǳ������� �����޸Ķ�������ԣ����Ե���ֻ������ 
		 {  //std::�������ռ� iostream ͷ�ļ��ж���� ��׼�����ռ� ���ϵ�using namespace std; ��ʾ�������붼��std ʵ����ʲô�ط��� ����ʲô�ط�д 
		 	std::cout<<"name:"<<name<<std::endl;//endl���ǻ��� 
		 	std::cout<<"ID:"<<id<<std::endl;//��name id ��� û�иı�name �� id ��ֵ Ϊ�˱�������� ����const 
		 }
		 
		 void show (std::ofstream &of)//out put file stream
		 {
		 	of<<name<<id;
		  } //��ʾ���ļ��� ��ʾ�������豸��  
		  
		  /*��������show C++��Ϊ��ͬ������˼ ���������*/ 
		  void operator +(Student &obj)
		  {
		  	//�Ӻŵĺ��� 
		   } 
	private:
		char name[50];
		const int id;//����const ����public�ĺ����б仯 ���ܳ�ʼ�� 
		
		std::string name; //C++�ṩ�ı�׼�� �ַ���  
		//������һ�� ����Ҫдstrcpy ֱ�ӳ�ʼ��������name(name) 
};     
 
int main()
{
	Student st("HU",8888);
	st.show();
	
	Student st1=st; //��st1����st ����ÿ������캯�� 
	//Student st1(st);
	st1+st;/*����operator objҲ�Ƕ��� st1��objҲ���ÿ������캯��
	       st1.+(st); 
	       Ҫ��ֹ�������캯���ĵ��� ֻҪ�����һ�� 
	       ���������캯��˽��
		   obj��st��ͬһ������*/ 
		   /*int x=5;
		   int &y=x; 
	       y=6;
	       std::cout<<x<<std::endl;
		   y��x��ͬһ������
		   y��Ϊx�ı���*/
    std::cout<<st.name<<std::endl;//��������д��Ϊname��private 
	
	std::ofstream of("student.txt");//��һ���ļ� ����of�Ķ��� ������ѧ��Ҫ��������  
	st.show(of);//of���ɶ������ 
	show("HU",8888);//C++һ��˼ά�߼��ı仯 	
	return 0;
 } 
 
 
 /*�������أ����������
  this->name=this->name+"XXX",//�������ֱ�� �ӷ�������������� ���������һ������ 
  
  
