#include<iostream>
using namespace std;


class a
{
	public :
		
		virtual  void call()
		{
			cout<<"call parent"<<endl;
			}	
};

class b : public a
{
	public :
	
	  void  call  () override
	{
		cout<<"Call child"<<endl;
	}
	void sms()
	{
		cout<<"sms child"<<endl;
		}	
};


int main()
{
	b obj;
	
	obj.sms();
	obj.call();
}