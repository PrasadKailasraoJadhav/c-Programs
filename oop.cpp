#include<iostream>
using namespace std;


class Arithmatic
{	
	public:
		//characteristrics
		int iNo1;
		int iNo2;

		//Behaviour
		Arithmatic()// Default construtor
		{
 			cout<<"Inside Default construstor\n";
			 iNo1=0;
		     iNo2=0;
		}

		Arithmatic(int A,int B)//Prameterise  construtor
		{
 			cout<<"Inside Parameterise  construstor\n";
			 iNo1=A;
		     iNo2=B;  
		}

		~Arithmatic()//Distructor
		{
		cout<<"Inside Default disstrustor\n";	
		}

		int Addition()
		{
			 int iAns=0;
			iAns=iNo1+iNo2;
			return iAns;
		}

		int Substraction()
		{
			int iAns=0;
			iAns=iNo1-iNo2;
			return iAns;
		}
};
int main()
{
	int iValue1=0,iValue2=0,iRet=0;



	cout<<"Enter 1st no:";
	cin>>iValue1;

	cout<<"Enter 2st no:";
	cin>>iValue2;


    Arithmatic obj1;
	Arithmatic obj2(iValue1,iValue2);

	iRet=obj2.Addition();
	cout<<"Addition is :"<<iRet<<"\n";

	iRet=obj2.Substraction();
	cout<<"Substraction is :"<<iRet<<"\n";

	return 0;
}