#include<iostream>
using namespace std;


class Demo 
{
int i;
public:
	int x;


private:
	int y;

public:
	Demo()
	{
		x=10;
		y=20;
		i=30;

	}
	void fun()
	{
		cout<<"Inside public fun\n";
		cout<<y;//Allowed
		gun();
	}
private:
	void gun()
	{
		cout<<"Inside Private gun\n";
		cout<<y;//Allowed
	}

};

int main()
{
	Demo obj
	cout<<obj.x;//Allowed
	//cout<<obj.y"\n";//not Allowed
	//cout<<obj.i"\n";//not Allowed

	obj.fun();//Allow

	//obj.gun();//Not allowed


	return 0;
}