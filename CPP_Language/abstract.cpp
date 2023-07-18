#include<iostream>
using namespace std;



class coffee
{
	public :
	void virtual beans();	
};

class user :public coffee
{
	public :
		void beans()
		{
			cout<<"powder"<<endl;
		}
		void drink()
		{
			cout<<"drink"<<endl;
		}
};


int main()
{
	
		user u;
		u.drink();
	
	
	
}