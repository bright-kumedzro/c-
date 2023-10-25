#include <iostream>

using namespace std;

int main()
{
   int num , rem, sum = 0;


   cout << "please enter the number:    ";

   cin >> num;

   while(num > 0){

         rem= num % 10;

         sum += rem;

             num = num / 10;

   }
   cout << "the sum of the digits in this figure is "<<sum<<endl;
    return 0;
}
