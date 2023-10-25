#include <iostream>

using namespace std;

int main()
{
    int n , j , i, factor_count = 0;
    cout << "enter number: ";
    cin >> n;
    cout << "The first "<<n<<" prime numbers are; ";
       for (i = 2; i<=n; i++)
       {

           for (j = 1; j<=i; j++)
           {
             if (i % j == 0)
             {
                 factor_count += 1;
             }

           }
             if (factor_count <= 2)

                 cout<<i<< " " ;

           factor_count = 0;
       }

    return 0;
}
