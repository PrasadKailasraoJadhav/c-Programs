#include<iostream>
using namespace std;

class Demo
{
public:
	int i,j;

	void fun()//Defination
	{
		cout<<"inside fun\n";
	}

	void gun()//Defination 
	{
		cout<<"inside gun\n";
	}
};

class Hello:public Demo
{
public:
	int x,y;

	void sun()//Defination
	{
		cout<<"inside sun\n";
	}

	void gun()//ReDefination
	//void gun(int no)//
	{
		cout<<"Inside Gun of child ";
	}

};

int main()
{



	return 0;
}