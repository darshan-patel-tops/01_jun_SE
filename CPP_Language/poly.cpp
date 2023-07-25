#include<iostream>
using namespace std;

class vishal
{
	public :
		void add(int a,int b)
		{
				cout<<"Total is int :"<<a+b<<endl;
		}	
		void add(int a,int b,int c)
		{
				cout<<"Total is int with 3 value :"<<a+b+c<<endl;
		}	
		void add(double a,double b)
		{
				cout<<"Total is float :"<<a+b<<endl;
		}	
};

main()
{
	vishal v;
	v.add(1,2);
	v.add(1,2,5);
	v.add(1.0,2.5);
	
}

