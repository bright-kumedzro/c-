#include <iostream>

using namespace std;

int main()
{
   double Starting_POpulation, years;

   years = 0;



   Starting_POpulation = 2000;

      while (Starting_POpulation <= 2000000){

       years = years + 0.5;

          Starting_POpulation = (Starting_POpulation * 0.15) + Starting_POpulation;


   }

     cout << "                                                              "<<endl;
   cout << "  It will take the village of Brofoyedur  "<< years << "  years to become a city "<< endl;

    return 0;
}
