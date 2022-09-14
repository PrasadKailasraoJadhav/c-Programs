#include<iostream>
using namespace std;

void CallValue(int no)
{
	no++;5
}

void CallAddress(int*p)
{
	(*p)++;
}

void CallReferance(int &ref)
{
	ref++;
}

int main()
{
	
	int a=10,b=10,c=10;

	CallValue(a);
	cout<<a<<"\n";

	CallAddress(&b);
	cout<<b<<"\n";

	CallReferance(c);
	cout<<c<<"\n";

	return 0;
}