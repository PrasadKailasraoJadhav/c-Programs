#include<iostream>
using namespace std;

class Demo
{
public:
	int i,j;

	void gun()//Defination
	{
		cout<<"Inside Gun";
	}
	void fun()//Defination
	{
		cout<<"inside fun\n";
	}

	void fun(int no)//overloaded Defination 
	{
		cout<<"inside gun\n";
	}
};

int main()
{



	return 0;
}