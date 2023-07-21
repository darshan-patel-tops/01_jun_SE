#include<iostream>
using namespace std;

class basic
{
	public :
//		string name1;
		int age1;
		
		void basicinfo(int age)
		{
			this->age1=age;
			cout<<"Age is :"<<age<<endl;
		
			
		}		
};

class student 
{
		public :
			int marks1;
				void marks(int marks,basic* b1)
				{
					cout<<"Your total : "<<marks<<endl;
					cout<<"Age from another class without inherit :"
					<<b1->age1;
				}
};

main()
{
	
	basic b;
	student s;
		
	b.basicinfo(50);
	s.marks(450,&b);
	

}