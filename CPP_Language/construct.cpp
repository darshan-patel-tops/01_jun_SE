#include<iostream>
using namespace std;


class dost
{
	//construct is invoked by default 
	//whenever object is created	
	public :
	dost()
	{
		cout<<"aa gya main"<<endl;
	}
	
	//destruct is called at last
	~dost()
	{
		cout<<"chai piya baar aana glass toda athani"<<endl;
	}
	
	void food()
	{
		cout<<"khana"<<endl;
	}
};


int main()
{
	dost hamza;
	hamza.food();
	hamza.food();
	hamza.food();
	hamza.food();
	hamza.food();
	
	
}