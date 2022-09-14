#include<iostream>
using namespace std;

class Base
{
public:
	int x,y;
//1000
	void fun()  // concreate non virtual
	{
		cout<<"Base fun\n";
	}
//2000
	virtual void gun()// concreate virtual
	{
		cout<<"Base gun\n";
	}
//3000
	virtual void sun()// concreate  virtual
	{
  
		cout<<"Base sun\n";
	}
	//_____
	virtual void run()=0;//Abstract function
	
};
class Derived:public Base
{
public:

	int i,j;
//4000 	
		void fun()  //Redefination of concreate function
		{
			cout<<"Derived fun\n";
		}
		//5000
		void gun() //overridin
		{
			cout<<"Derived gun\n";
		}
		//6000
		void run()//concreate function
		{
			cout<<"Derived run\n";
		}
	
};

int main()
{
	//Base bobj;  Not allowed
	Derived dobj;
	Base *bp=NULL;
	bp=&dobj;
	cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";

	bp->fun();
    bp->sun();
    bp->gun();
    bp->run();
	

	return 0;
}