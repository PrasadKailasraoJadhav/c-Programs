#include<iostream>
using namespace std;

class Base 
{
public:
	int x,y;
		Base()
		{
			cout<<"Inside Base constructure\n";
		}
		~Base()
		{
			cout<<"Inside Base disstructure\n";
		}
		void fun()
		{
			cout<<"Inside base fun";

		}

};

class Derived:public Base
{

public:
	int i,j;
	Derived()
	{
		cout<<"inside derived constructor\n";
	}
	~Derived()
	{
		cout<<"inside derived disstructor\n";
	}
	void gun()
		{
			cout<<"Inside base gun\n";

		}
}; 

int main()
{
	
	Derived dobj;

	cout<<sizeof(Base)<<"\n";
	cout<<sizeof(Derived)<<"\n";
	dobj.fun();
	dobj.gun();

	return 0;
}