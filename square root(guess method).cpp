#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double x,N, NewGuess;

  double limit = 0.0000001;

   cout << "what number do yo want to find its square root: ";
   cin >> N;
    double root = N; // The number which the user enters is taken as the last guess.
                    //
       while(limit){

        NewGuess = 0.5 * (root + (N/root));

        x = abs(NewGuess - root);
        if (x<limit)
              break;
         root = NewGuess;
       }

       cout << root<<endl;

    return 0;
}
