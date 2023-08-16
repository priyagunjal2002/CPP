#include<iostream>                      //functn overriding
                                           
using namespace std;

class A
 {
 	public:
 		void person()
 		{
 			cout<<"good morning"<<endl;
		 }
 };
 class B:public A
 {
 	public:
 		void person()
 		{
 			cout<<"good night"<<endl;
		 }
 };
int main()
{
B obj;
obj.person();
obj.A::person();

return 0;
	
}
