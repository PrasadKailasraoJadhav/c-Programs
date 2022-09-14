#include<iostream>
//using namespace std;

namespace Marvellous
{
	void fun ()
	{
		std::cout<<"Inside fun\n";

	}
}

int main()
{
   std::cout<<"JAYGANESH\n";

   using namespace Marvellous;
   
   fun();	
	return 0;                                               
}