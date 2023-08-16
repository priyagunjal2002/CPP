#include<iostream>                 //polymorphism
                                  //function overloading
using namespace std;

class A
{
int num1,num2,s,m;

public:

void person()
{
	cout<<"Enter two numbers :";
	cin>>num1>>num2;
	s=num1+num2;
	cout<<"Addition "<<s<<endl;
	}	
void person(int a,int b)
{
m=a*b;
cout<<"Multiplication"<<m<<endl;	
	}	
};



int main()
{
A obj;
obj.person();
obj.person(12,10);

return 0;	
	
}
