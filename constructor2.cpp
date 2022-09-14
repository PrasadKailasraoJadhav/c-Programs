#include<iostream>
using namespace std;


class Demo 
{

public:
	int x;//characteristics
	int y;


	Demo()
	{
		cout<<"Inside Default construstor\n";
		x=0;
		y=0;
	}
	Demo(int i,int j)
	{
		cout<<"Inside Prameterise construstor\n";
		x=i;
		y=j;
	}
	Demo(Demo &ref)
	{
		cout<<"Inside copy construstor\n";
		x=ref.x;
		y=ref.y;
	}

	~Demo()
	{
		cout<<"Inside Default destrustor\n";
	}

};

int main()
{
	
	Demo obj1(11,21);
	
	Demo obj2(obj1);	
	return 0;

}