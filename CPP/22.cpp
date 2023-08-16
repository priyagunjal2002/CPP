#include<iostream>             //hierarchical inheritance
using namespace std;

class animal
{
	public:
void eat()
{
	cout<<"animaal eating"<<endl;
}
	
	
};

class cat:public animal
{
public:
void voice()
{
	cout<<"meow meow..."<<endl;
	}	
};


class dog:public animal
{
	public:
void bark()
{
	cout<<"woof Woof"<<endl;
	}	
	
};

int main()
{
cat c;
dog d;

c.eat();
c.voice();

d.eat();
d.bark();
return 0;
	
	
}
