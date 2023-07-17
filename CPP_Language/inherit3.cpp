#include<iostream>
using namespace std;

int a,b,c;
class calc
{

		public :
			int add(int a,int b)
	{
		
			cout<<"parent "<<a+b;
	}
};
class ac :public calc
{
	public :
//		using calc::add;
		calc::add;
	int add(int a,int b,int c)
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
	obj.add(a,b,c);
}