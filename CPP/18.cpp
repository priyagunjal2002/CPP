#include<iostream>
using namespace std;

class thief
{
	private:
string name,address;
int mob;	
	
	public:
void input()
{
	name="raj";
	address="pune,sangvi";
	mob=645852565;
	
	}	
	
void output()
{
	cout<<name<<endl;
	cout<<address<<endl;
	cout<<mob;
	
		
	}	
	
	
};

class police:public thief
{
	
};



int main()
{
police p;
p.input();
p.output();

return 0;	
	
}
