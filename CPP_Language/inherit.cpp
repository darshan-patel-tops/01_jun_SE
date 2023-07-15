#include<iostream>
using namespace std;

class dieselcar {
public :
	void diesel()
	{
		cout<<"diesel"<<endl;
	}
};
class petrolcar : public dieselcar
{
		public :
	void tyre()
	{cout<<"Tyre"<<endl;}	
	void inventory()
	{cout<<"inventory"<<endl;}	
	void engine()
	{cout<<"engine"<<endl;}	
	void body()
	{cout<<"body"<<endl;}	
	void seat()
	{cout<<"seat"<<endl;}	
};

class evcar : public dieselcar
{
	
		public :
	void evengine()
	{
		cout<<"electricity"<<endl;
		}	
	void power()
	{
		cout<<"power electricity"<<endl;
		}	
};


int main()
{
	evcar e;
	e.evengine();
//	e.power();
//	e.body();
//	e.engine();
//	e.inventory();
//	e.tyre();
	e.diesel();
//	petrolcar p;
//	p.body();
//	p.engine();
//	p.inventory();
}