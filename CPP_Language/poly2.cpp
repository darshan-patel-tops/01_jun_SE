#include<iostream>
using namespace std;

class vishal
{
	public :
		void add(double a,double b)
		{
				cout<<"Total is int parent :"<<a+b<<endl;
		}		
};
class bhavesh : public vishal 
{
	public :
		using vishal::add;
		void add(int a,int b)
		{
				cout<<"Total is int child :"<<a+b<<endl;
		}		
};

main()
{
	bhavesh v;
	v.add(1,2);
	v.add(1.0,2.5);
	v.add(10,2);
	
}

