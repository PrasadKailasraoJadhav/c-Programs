#include<iostream>
using namespace std;

class Base
{
public:
	int 
	Base()
	{

		cout<<"base contructor\n";
	}
	~Base()
	{

		cout<<"base distructor\n";
	}
};
class Derived:public Base
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

int main()
{
	
	Derived dobj;


	return 0;
}