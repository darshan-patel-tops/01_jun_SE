#include<iostream>
using namespace std;

class  rbi
{
		public :
			void virtual interest();
};

class bank : public rbi
{
	public :
		void sms()
		{
			cout<<"sms charge"<<endl;
		}
		
		void interest()
		{
			cout<<"150 rupya dega"<<endl;
		}
};

int main()
{
	bank b;
	b.sms();
	b.interest();
}