#include<iostream>
using namespace std;

class dada
{	
public :
	void property()
	{
		cout<<"dada ka property";	
	}	
};
class baap : public dada
{	
public :
	void property()
	{
		cout<<"baap ka property";	
	}	
};
class pota : public baap
{	
public :
	void property()
	{
		cout<<"pota ka property";	
	}	
};
int main()
{
	pota p;
	p.property();
}