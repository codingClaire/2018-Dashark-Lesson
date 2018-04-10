#include<iostream>
#include<string.h> 
#include<fstring> 
class Student
{
   public:
   	
   	   //student():name("N\A"),id(0) 调用string的构造函数 
   	   student():id(0)//在这里给id 赋值 缺省值  
		 {
		 }
		 Student(char name[],int id)：id(id) //构造函数没有返回 没有void  
		 //这里name 没有初始化，执行时就会乱码
		  
		 {                          //两个id  初始化id  :this->id(id) 
		 	this->id=id;
		    strcpy(this->name,name);//初始化 要加头文件 
		  //左边 类对象的id 右边形参的id   错误 因为给id 加了const 函数不能修改成员变量  
		  //const删除即可 
		  
		  this->name=this->name+"XXX";//在name后面加了一串字符串 this 表示的是对象的name 
		 }
		 /*函数重载*/ 
		 
		 Student(const Student &obj)：id(obj.id) //id初始化 传一个对象obj作为函数的参数 obj里的id 赋值给当前的对象的id 
		 {
		 	std::cout<<"something"<<std::endl;
		 }
		 void show() const
		 {
		 }
		 ~Student()
		 {
		 	
		 }
		 void show() const//这里的const表示show函数是常量函数 不能修改对象的属性，可以当成只读函数 
		 {  //std::是命名空间 iostream 头文件中定义的 标准命名空间 书上的using namespace std; 表示整个代码都有std 实际在什么地方用 就在什么地方写 
		 	std::cout<<"name:"<<name<<std::endl;//endl就是换行 
		 	std::cout<<"ID:"<<id<<std::endl;//对name id 输出 没有改变name 和 id 的值 为了避免误操作 加上const 
		 }
		 
		 void show (std::ofstream &of)//out put file stream
		 {
		 	of<<name<<id;
		  } //显示在文件上 显示在网络设备上  
		  
		  /*上下两个show C++认为是同样的意思 输入输出流*/ 
		  void operator +(Student &obj)
		  {
		  	//加号的含义 
		   } 
	private:
		char name[50];
		const int id;//加了const 不能public的函数中变化 不能初始化 
		
		std::string name; //C++提供的标准类 字符串  
		//有了这一句 不需要写strcpy 直接初始化可以用name(name) 
};     
 
int main()
{
	Student st("HU",8888);
	st.show();
	
	Student st1=st; //将st1赋给st 会调用拷贝构造函数 
	//Student st1(st);
	st1+st;/*调用operator obj也是对象 st1到obj也调用拷贝构造函数
	       st1.+(st); 
	       要阻止拷贝构造函数的调用 只要求加在一起 
	       将拷贝构造函数私有
		   obj和st是同一个对象*/ 
		   /*int x=5;
		   int &y=x; 
	       y=6;
	       std::cout<<x<<std::endl;
		   y和x是同一个对象
		   y称为x的别名*/
    std::cout<<st.name<<std::endl;//不能这样写因为name是private 
	
	std::ofstream of("student.txt");//有一个文件 构成of的对象 现在有学生要加入名单  
	st.show(of);//of当成对象接收 
	show("HU",8888);//C++一种思维逻辑的变化 	
	return 0;
 } 
 
 
 /*函数重载，运算符重载
  this->name=this->name+"XXX",//这个对象直到 加法重载运算符重载 运算符当成一个函数 
  
  
