#include<iostream>
using namespace std;
class ControlStatement
{
	public:
		int num;
	void  ifElseDemo()
	{
		cout<<"Enter the value Number : "<<endl;
		cin>>num;
		if(num%2==0)
			{
				cout<<"num : "<<num<<" is even number"<<endl;
			}	
		else
			{
				cout<<"num : "<<num<<" is odd number"<<endl;
			}
	}
		
};
int main()
{
		ControlStatement ifElse;
		ifElse.ifElseDemo();
return 0;
}
