 #include<iostream>
using namespace std;


int main()
{
	

	struct Demo
	{

		int no1;
		int no2;
	};
                                //SAME AS typedef
	
	typedef struct Demo DEMO;
	typedef struct Demo * PDEMO;
	typedef struct Demo ** PPDEMO;

//OR

	/*typedef struct PDEMO{
		int No1;
		int No2;                   it ALso WORK

	}DEMO, *PDEMO, **PPDEMO;*/





	//struct Demo obj;
	DEMO obj;

	//struct Demo *p=&obj;
	PDEMO p=&obj;

	//struct Demo **q=&p;
	PPDEMO q=&p;





	return 0;
}