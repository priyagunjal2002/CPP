#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	string str;
	ofstream newfile("C:\\Users\\Amit\\OneDrive\\Desktop\\devops.txt");      //ofstream-->create,write  a file               //ifstream---->read a file 
	
	//ifstream newfile("C:\\Users\\Amit\\OneDrive\\Desktop\c++.txt");
	
	+cout<<"file created";
	newfile<<"cpp course";
	
/*	while(getline(newfile,str))
	{
		cout<<str<<endl;
	}
	*/
	newfile.close();
	return 0;
	
	}
