#include<iostream>
using namespace std;

class dada
{
	public :
		void zameen()
		{
			cout<<"Zameen \n";	
		}	
};
class papa : public virtual dada
{
	public :
		void car()
		{
			cout<<"car \n";	
		}	
};
class kaka : public virtual dada
{
	public :
//		using dada::zameen;
		void bike()
		{
			cout<<"bike \n";	
		}	
};

class son :public papa, public kaka
{
		public :
//			using dada::zameen;
			void house()
			{
				cout<<"house"<<endl;
			}
};

int main()
{
	son s;
	s.bike();
	s.car();
	s.house();
	s.zameen();
	
}