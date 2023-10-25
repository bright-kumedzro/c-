#include <iostream>

using namespace std;

int main()
{
    int a,b,sum = 0;

    cout << "enter two positive integers to be multiplied\n";
    cout << "NB: press enter after entering each value"<<endl;
    cin >> a >> b;
    do
    {
        if (a % 2 != 0)
        {
            sum = sum + b;
        }
        a = a / 2;
        b = b * 2;
    }while (a >= 1);
    cout << "The product of the two integers is "<<sum;
    return 0;
}
