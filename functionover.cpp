#include<iostream>
using namespace std;
class Demo
{
public:
	//Addition@2ii
	int Addition (int No1,int No2)//1000
	{
		int ans =0;
		ans=No1+No2;
		return ans;
	}
	int Addition (int No1,int No2,int No3)
	{
		int ans =0;
		ans=No1+No2+No3;
		return ans;
	}

	int Addition (int No1,int No2,int No3,int No4)
	{
		int ans =0;
		ans=No1+No2+No3+No4;
		return ans;
	}

}; 

int main()
{
	Demo obj;
	int ret=0;

	//PUSH 10
	//PUSH  11
	
	//CALL 1000
	ret=obj.Addition(10,11);//obj.Addition@2ii(10,11)
	cout<<ret<<"\n";
	//PUSH 10
	//PUSH  11
	//PUSH 12
	//CALL 2000
	ret=obj.Addition(10,11,12);
	cout<<ret<<"\n";
	//PUSH 10
	//PUSH  11
	//PUSH 12
	//PUSH 13
	//CALL 3000
	ret=obj.Addition(10,11,12,13);
	cout<<ret<<"\n";

	return 0;
}
/*
changing no of argumrntd 




*/