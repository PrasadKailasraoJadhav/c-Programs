#include<iostream>
using namespace std;

class Base
{
public:
	int x,y;
	
};
class Derived:public Base
{
public:

	int i,j;
}; 

int main()
{
//Dynamic memory
Base *bp=new Base();//No Casting 
Derived*dp=new Derived();//No Casting 

Base*bp1=new Derived();//Up Casting
//Derived*dp1=new Base();//Down Casting is not allowed but concept is there



	return 0;
}