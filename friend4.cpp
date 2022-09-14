#include<iostream>
using namespace std;
class hello
{ 
public:
	void fun();
	void gun();
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
	//friend void fun();			//Naked function
	//friend void gun();

	//friend void hello:: fun();	//Member function 
 	//friend void hello:: gun();

 	friend class hello;				//whole class
};
void hello:: fun()
{
	Demo obj1;
	cout<<obj1.i<<"\n";
	cout<<obj1.j<<"\n";
	cout<<obj1.k<<"\n";
}

void hello:: gun()
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
	hobj.gun();


	return 0;
}