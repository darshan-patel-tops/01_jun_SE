#include<iostream>
using namespace std;

int a,b,c;
class calc
{
		public :
			int add(int a,int b,int c)
	{
		
			cout<<"parent "<<a+b+c;
	}
};
class ac :public calc
{
	public :
//		calc::add(int a,int b,int c);
	int add(int a,int b)
	{
		cout<<"child calc "<<a+b+c;
	}	
};
main()
{
//	int a,c,b;
	cin>>a;
	cin>>b;
	cin>>c;
	ac obj;
//	obj.calc::add(a,b,c);
	obj.add(a,b);
}