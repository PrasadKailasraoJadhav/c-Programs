#include<iostream>
using namespace std;


int main()
{
   int choice=0;
   enum Marvellous_Batches{PPA=0,LB=1,LSP=2,PYTHON=3};
    int Fees[]={15000,16000,17000,18000};
    const float Duration[]={3.5,4.0,3.5,4.5};
  

   
   cout<<"Select the batch\n";
   cout<<"0:PPA\n";
   cout<<"1:LB\n";
  
   cin>>choice;

  switch(choice)
  {

  	case PPA:
  	cout<<"Thank you for selecting this batch\n";
    cout<<"Duration is:"<<Duration[PPA]<<"\n";
    cout<<"Fees Are :"<<Fees[PPA]<<"\n";
  	break;

  	case LB:
    cout<<"Thank you for selecting this batch\n";
    cout<<"Duration is:"<<Duration[LB]<<"\n";
    cout<<"Fees Are :"<<Fees[LB]<<"\n";
    break;

  	default:
  	cout<<"Invalid \n";
  	break;
  }


	return 0;                                               
}