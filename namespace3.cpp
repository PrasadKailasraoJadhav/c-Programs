#include<iostream>
//using namespace std;

namespace Marvellous
{
	void fun ()
	{
		std::cout<<"Inside fun Marvellous \n";

	}
}
namespace Infosystem
{
	void fun ()
	{
		std::cout<<"Inside fun INfosystem\n";

	}
}

int main()
{
   std::cout<<"JAYGANESH\n";

   using namespace Marvellous;
   using namespace Infosystem;
   
    Infosystem::fun();	
	return 0;                                               
}