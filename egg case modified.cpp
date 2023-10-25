#include <iostream>

using namespace std;

int main()
{
    int NoOfEggs = 0, EggsLimit;
   double EggPrice = 0;
    EggsLimit = 500000;

      cout <<  "  number of eggs                 Prices (GHS) "<<endl;
      cout << "     "<<endl;
   for (int i = 1; i < EggsLimit; i++ ){
        if (i % 2 == 1 && i % 3 == 1 && i % 4 == 1 && i % 5==1 && i % 6==1 && i % 7 == 0 ){


                    cout << "        "<< i << " ....................... " <<(i*4) / 100.00 << endl;
                    cout << "  "<<endl;
   }
   }





    return 0;
}
