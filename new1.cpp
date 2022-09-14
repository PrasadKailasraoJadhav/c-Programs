#include<iostream>
using namespace std;

class Demo
{

public:
	int x;
	int y;

	Demo()
	{
		cout<<"Inside Default constructor\n";
	}

	~Demo()
	{
		cout<<"Inside distructor\n";
	}
	


	void fun()
	{
		cout<<"Tnside fun\n";

	}
};


int main()
{
	Demo obj;//Static object creation

	Demo *ptr=NULL;
	ptr=new Demo;//dynamic object creation 

	obj.fun();//direct accessing operator

	ptr->fun();//indirect accesing operator

	delete ptr;//Deallocation memory



	return 0;
}