#include<iostream>
using namespace std;

class Dad
{
	protected:
		int amount;
		public:
		void input()
		{
			amount=100000;
			
		}
};

class son:public Dad
{
int money;

public:
void show()
{
	money=3216;
	cout<<amount<<endl;
	cout<<money;
	
	}	
	
};
int main()
{
son s;
s.input();
s.show();
return 0;	
}
