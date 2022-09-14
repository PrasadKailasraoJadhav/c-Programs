#include<iostream>
using namespace std;

class Base
{
public:
	int x,y;

	void fun()//Defination
	{
		cout<<"inside Base fun"<<"\n";
	}

	void gun()//Defination
	{
		cout<<"inside Base gun"<<"\n";
	}
	
};
class Derived:public Base
{
public:

	int i,j;

	void sun()//Defination
	{
		cout<<"inside Derived sun"<<"\n";
	}
	void fun()
	{
		cout<<"Derived fun"<<"\n";
	}

}; 

int main()
{

Base*bp=new Derived();//Up Casting
bp->fun();
bp->gun();
//bp->sun();//NA

cout<<sizeof(Base)<<"\n";
cout<<sizeof(Derived)<<"\n";

	return 0;
}