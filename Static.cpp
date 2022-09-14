#include<iostream>
using namespace std;

class Demo
{
public:
//ststic charectics
	int i,j;
	static int x;

	Demo()
	{
		cout<<"Inside default constructer\n";
		i=10;
		j=20;
	}

};

int Demo::x=30;

int main()
{
	cout<<Demo::x<<"\n";
	
	Demo obj1;
	Demo obj2;
	cout<<sizeof(obj1)<<"\n";
	cout<<sizeof(obj2)<<"\n";
	cout<<obj1.i<<"\n";
	cout<<obj2.i<<"\n";

	return 0;
}