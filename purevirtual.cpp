#include<iostream>
using namespace std;

class Base
{
public:
	int x,y;

	void Add(int a,int b)
	{

		return a + b;
	}
	virtual int sub(int a,int b)=0;// 
	
};
class Derived:public Base
{
public:

	int i,j;

	int sub(int a,int b)
	{
		return a - b;
	}

	int mult(int a,int b)
	{
		return a * b;
	}
};

int main()
{
	Base *bp=new Derived();
	int ret=0;

	ret=bp->Add(11,10);
	cout<<ret<<;

	ret=bp->sub(11,10);
	cout<<ret<<;

	//ret=bp->mult(11,10);
	//cout<<ret<<"\n";

	return 0;
}