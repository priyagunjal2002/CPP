#include<iostream>
using namespace std;


class person
{
	int run;
	string msg;

public:
	void play()
	{
		run=50;
		cout<<" today i scored "<<run<<endl;
	}
	void walk()
	{
		msg="today i walked 3 kms";
		cout<<msg;
	}
	
};
int main()
{
person obj;
obj.play();
obj.walk();	
	
}
