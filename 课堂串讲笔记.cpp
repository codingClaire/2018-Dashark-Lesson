#include<iostream>
#include<string.h> 
class Student
{
   public:
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
		 }
		 Student(const Student &obj)��id(obj.id) //id��ʼ�� ��һ������obj��Ϊ�����Ĳ��� obj���id ��ֵ����ǰ�Ķ����id 
		 {
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
	private:
		char name[50];
		const int id;//����const ����public�ĺ����б仯 ���ܳ�ʼ�� 
		
		std::string name //C++�ṩ�ı�׼�� 
		//������һ�� ����Ҫдstrcpy ֱ�ӳ�ʼ��������name(name) 
};     
 
int main()
{
	Student st("HU",8888);
	st.show();
	
	
    std::cout<<st.name<<std::endl;//��������д��Ϊname��private 
	
	show("HU",8888);//C++һ��˼ά�߼��ı仯 	
	return 0;
 } 
