#include<iostream>
using namespace std;

int main()
{
	cout<<"Execution started"<<endl;
	int a,b,c;
	cout<<"Enter two numbers";
	cin>>a>>b;
	
	try
	{
		if(b==0)
		throw b;
		c=a/b;
		cout<<"Result:"<<c;
	}
	catch(int x)
	{
	
	cout<<"cannot divide by 0"<<x;
}
return 0;
}
