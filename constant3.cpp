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
	Demo(int a,int b):j(b)
	{

		i=a;
	}
};

int main()
{
	//Demo obj;
	Demo obj(11,21);
	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";

	return 0;
}