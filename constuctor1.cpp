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
	}

	~Demo()
	{
		cout<<"Inside Default destrustor\n";
	}

};

int main()
{
	//cout<<"Inside Main\n";
	//Demo obj1;
	Demo obj2(11,21);
	Demo obj3(51,101); 
	cout<<sizeof(obj2)<<"\n";
	cout<<sizeof(obj3)<<"\n";

		cout<<"value of x in obj2"<<obj2.x;"\n";
		cout<<"value of x in obj3"<<obj2.x;

		obj2.x++;
		cout<<"value of x in obj2"<<obj2.x;
		cout<<"value of x in obj3"<<obj2.x;
	//cout<<"End of  Main\n";
	return 0;

}