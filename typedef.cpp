#include<iostream>
using namespace std;
//#include<typedef>




int main()
{
	typedef int NUMBER;
	NUMBER no=10;

	cout<<sizeof(no)<<"\n";

	cout<<no<<"\n";

typedef const int*CPTR;
//const int *p=NULL;
CPTR p=&no;
p=&no;
cout<<*p<<"\n";

	

	return 0;
}