#include<iostream>
using namespace std;

class Demo
{
public:
	int i;
private:
	int j;
protected:
	int k;
	

};

class Hello:public Demo
{

public:
	int x;
private:
	int y;
protected:
	int z;
public:
	void fun()
	{
		cout<<k<<"\n";
	}
	
}; 

int main()
{

cout<<sizeof(Demo)<<"\n";
	cout<<sizeof(Hello)<<"\n";
	Demo dobj;
	cout<<dobj.i;//allowed
	//dobj.j;//not allowed
	//dobj.k;//not allowed

	Hello Hobj;
	cout<<Hobj.x;//allowed
	//hobj.y;//not allowed
	//hobj.z;//not allowed
	
	cout<<Hobj.i;//A
	//hobj.j;//NA
	//hobj.k;//A
	return 0;
}