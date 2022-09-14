#include<iostream>
using namespace std;


class Base
{
public:
	Base()
	{

		cout<<"base contructor\n";
	}
	~Base()
	{

		cout<<"base distructor\n";
	}
};
class Deriverd:public Base
{
public:
	int a,b,c;
	Derived()
	{

		cout<<"derived  contructor\n";
	}
	~Derived()
	{

		cout<<"derived distructor\n";
	}
};
class Deriverd1:public Derived
{
public:
	int k,l;
	Derived1()
	{

		cout<<"derived 1 contructor\n";
	}
	~Derived1()
	{

		cout<<"derived1 distructor\n";
	}
};

int main()
{
	
	Derived1 dobj;
	

	return 0;
}