#include<iostream>
using namespace std;

int main()
{
	int Arr[10];
	int *p=NULL;

	//p=(int*)malloc(sizeof(int)*10);//in c Progra

	p=new int[10];//dynamic m/m allocation in c++

	if (p==NULL)
	{
		cout<<"unable to allocate \n";
	}
	else
	{
		cout<<"Allocated at Address :"<<p<<"\n";
	}
	delete []p;//deallocate the memory in c++
	// when we using the arr then use [] otherwise no

	return 0;
}