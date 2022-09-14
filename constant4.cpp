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
	Demo(int a,int b):i(a),j(b)
	{

		cout<<"Inside ";
	}
};

int main()
{
	//Demo obj1;
	Demo obj(11,21);
	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";

	obj.i++;
	//obj.j++; // error bcoz j is constant  
	cout<<obj.i<<"\n";

	return 0;
}