#include <iostream>
using namespace std;
int main()
{
	int A, B;

	cout<<"Enter two numbers: ";
	cin>>A>>B;

	if (A >B)
	{
	      cout<<"  the Max number:"<<A;
	}

	if (B >= A)
	{
	       cout<<"the Max number:"<<B;
	}

	if(A==B)
	{

		cout<<"both Equal number:";
	}

	return 0;
}