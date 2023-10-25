#include <iostream>

using namespace std;

int main()
{
    int  NoOfEggs = 0, EggsLimit = 400;
   double EggPrice = 0;


   for (int i = 1; i < EggsLimit; i++ ){
        if (i % 2 == 1 && i % 3 == 1 && i % 4 == 1 && i % 5==1 && i % 6==1 && i % 7 == 0 )
            NoOfEggs = i;


   }
 cout << " smallest number of eggs the boy could possibly have is "<< NoOfEggs<< " eggs" <<endl;
 cout << "  "<<endl;
           cout << " these "<<NoOfEggs<< " eggs would cost GHS"<< (NoOfEggs * 4) / 100.00<<endl;
    return 0;
}
