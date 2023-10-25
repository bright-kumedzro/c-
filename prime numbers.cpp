#include <iostream>

using namespace std;

int main()
{
    int i , num ,fact_count = 0;
    cout << "enter number: ";
    cin >> num;
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
            fact_count += 1;
    }
    if (fact_count == 2)

        cout << num<<" is a prime number";

    else
        cout << num << " is not a prime number";
    return 0;
}
