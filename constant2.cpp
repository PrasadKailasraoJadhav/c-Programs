#include<iostream>
using namespace std;



class Demo
{
public:
	int i;
	const int j;

	Demo():j(20)//member initilization 
	{
		i=10;
		//j=20;NA
	}
};

int main()
{
	
	Demo obj;
	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";

	return 0;
}