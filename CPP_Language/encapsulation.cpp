#include<iostream>
using namespace std;

class mobile
{
	
	//encapsulation is wrapping up 
//	the data in the single unit
	public :
		void call()
		{
			cout<<"call"<<endl;
		}
		void sms()
		{
			cout<<"sms"<<endl;
		}
		void utube()
		{
			cout<<"utube"<<endl;
		}
		void muzik()
		{
			cout<<"muzik"<<endl;
		}
		void mms()
		{
			cout<<"mms"<<endl;
		}
		void google()
		{
			cout<<"google"<<endl;
		}
};




int main()
{
	mobile aakash;
	aakash.mms();
	aakash.sms();
	aakash.call();
	aakash.google();
	aakash.muzik();
	aakash.utube();
}