#include <iostream>

using namespace std;
  int factorial(int n); // declares a function that evaluates the factorial of a number.
  int n;
 int main()
{
   int n, r, nCr;
   cout << "please enter the value of n and r respectivly\n"
        << "where 0 < r <= n"<<endl;
        cin >> n >> r;
        if (n>=r)
        {
       nCr = factorial(n)/(factorial(n-r) * factorial(r));

        cout << n << " combination "<< r << " gives "<< nCr<<endl;

        }
        else
        {
            cout<< "Invalid input!\n"
                << "n should be greater than or equal to r";
        }
            return 0;
}

 int factorial (int n)
{
    int fact = 1;
    for (int i=1; i <= n; i++ )
    {
      fact = i * fact;
  }
  return fact;
}
