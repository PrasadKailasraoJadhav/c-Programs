#include<iostream>
using namespace std;
class hello
{ 
public:
	void fun();
};

class Demo
{
public:
	int i;
protected:
	int j;
private:
	int k;

public:
	Demo()
	{
		i=10;
		j=20;
		k=30;
	}

	friend void hello:: fun();

};
void hello:: fun()
{
	Demo obj1;
	cout<<obj1.i<<"\n";
	cout<<obj1.j<<"\n";
	cout<<obj1.k<<"\n";
}

int main()
{
	hello hobj;
	hobj.fun();


	return 0;
}