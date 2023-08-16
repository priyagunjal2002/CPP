#include<iostream>
using namespace std;

class myBank
{
private:
int atmpin,balance;	
	
	
	public:
	string bName,IFSC;
	int accNumber;
	
	
	
	void input()
	{
		atmpin=5432;
		balance=89000;
		bName="Bank Of Baroda";
		IFSC="BOB04235";
		accNumber=631452876540;
	}
	void output()
	{
		cout<<"my bank details:"<<endl;
		cout<<atmpin<<endl;
		cout<<balance<<endl;
		cout<<bName<<endl;
		cout<<IFSC<<endl;
		cout<<accNumber<<endl;
	}
};



int main()
{
	
	myBank m;
	m.input();
	m.output();
}
