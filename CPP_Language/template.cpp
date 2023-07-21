#include<iostream>
using namespace std;


template <typename cpp>
cpp cube(cpp &number)
{
	cout<<"cube area:"<<endl;
		return number * number * number * number;

}
cpp square(cpp &number)
{
	cout<<"square area:"<<endl;
		return number * number * number;

}
main()
{
	int num;
	cout<<"Enter a number :"<<endl;
	cin>>num;
	cout<<"Cube of "<<num<<" is :"<<cube(num)<<endl;
}