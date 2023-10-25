#include <iostream>

using namespace std;

int main()
{
   int M,m , n, rem=0, count = 0;
    cout << "enter the value of number\n";
     cout << "and its divisor"<<endl;
         cin >> m >>n;
         M = m;
         while (m > 0 && n < m)
         {
             rem = m - n;
             count ++;
             m = rem;
         }

         cout << n << " divides "<<M<< " "<< count<< " times and the remainder is "<<rem<<endl;
    return 0;
}



