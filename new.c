
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int Arr[10];
	int *p=NULL;

	p=(int*)malloc(sizeof(int)*10);//in c Progra

	//p=new int[10];//dynamic m/m allocation in c++

	if (p==NULL)
	{
		printf("unable to allocate \n");
	}
	else
	{
		printf("Allocated at Address :%d\n",&p);
	}
	free(p);//deallocate the memory in c++
	// when we using the arr then use [] otherwise no

	return 0;
}