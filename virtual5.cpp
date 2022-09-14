#include<iostream>
using namespace std;

class Base
{
public:
	int x,y;

	 virtual void fun()//Defination
	{
	 cout<<"inside Base fun"<<"\n";
	}

	virtual void gun()//Defination
	{ 
		cout<<"inside Base gun"<<"\n";
	}

	void sun()//Defination
	{ 
		cout<<"inside Base sun"<<"\n";
	}

	virtual void run()//Defination
	{
	 cout<<"inside Base run"<<"\n";
	}
};
class Derived:public Base
{
public:
    int i,j;
    
	void fun()//reDefination
	{ cout<<"inside Derived fun"<<"\n";}

	virtual void gun()//redefination  
	{ cout<<" inside Derived gun"<<"\n";}

	void sun()//reDefination
	{ cout<<"inside Derived sun"<<"\n";}

	virtual void mun()//Defination
	{ cout<<"inside Derived mun"<<"\n";}

}; 

int main()
{

Base*bp=new Derived();//Up Casting
bp->fun();
bp->gun();
bp->sun();
bp->run();
//bp->mun();//NA

cout<<sizeof(Base)<<"\n";
cout<<sizeof(Derived)<<"\n";

	return 0;
}