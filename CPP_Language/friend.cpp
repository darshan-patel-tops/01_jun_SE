#include<iostream>
using namespace std;



class hamza
{
	friend void access();
	
	public :
		int a=10;
	protected :
		int b= 20;
	private :
		int c = 30;
		
		
			
};

void access()
{
	hamza h;
	h.a;
	h.b;
	h.c;
	cout<<h.a<<endl;
	cout<<h.b<<endl;
	cout<<h.c<<endl;
}

int main()
{
	access();
//	hamza h;
//	
//	cout<<h.a<<endl;
//	cout<<h.b<<endl;
//	cout<<h.c<<endl;
//	cout<<h.a;
}