#include<iostream>
using namespace std;

class Base1
{
public:
	int i,j;
	Base1()
	{

		cout<<"base1 contructor\n";
	}
	~Base1()
	{

		cout<<"base1 distructor\n";
	}
};

class Base2
{
public:
	int x,y;
	Base2()
	{

		cout<<"base2 contructor\n";
	}
	~Base2()
	{

		cout<<"base2 distructor\n";
	}
};

class Derived: public Base1,Base2
{

public:

	int a;
	Derived()
	{

		cout<<"derived  contructor\n";
	}
	~Derived()
	{

		cout<<"derived distructor\n";
	}
};


int main()
{
	
	Derived dobj;


	return 0;
}