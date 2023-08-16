#include<iostream>
using namespace std;

class A
  
{
	
	public:
A(int a,int b)             //parameterized constructor
{
	cout<<a<<ends<<b;
	}	
	
};


int main()
{
A obj(10,20);
return 0;	
	
}
