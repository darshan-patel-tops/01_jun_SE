#include<iostream>
#include<fstream>

using namespace std;

main()
{
	
	
	string readfile;
	ofstream file1;
	file1.open("tops.txt",ios::app);
	
	cout<<"Enter data :"<<endl;
	getline(cin,readfile);
	
	file1<<readfile;
	file1.close();
	
	ifstream outfile;
	outfile.open("tops.txt",ios::in);
    getline(outfile,readfile);

	cout<<readfile;
	
	
	
	
}