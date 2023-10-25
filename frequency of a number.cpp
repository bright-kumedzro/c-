#include <iostream>

using namespace std;

int main()
{
    int  num;
     int n, frequency , x, rem;
       frequency = 0;
    cout << "enter number: ";
    cin >> num;
     n = num;
      cout << "       "<<endl;
    cout << "what number do you want to find its frequency: ";
    cin >> x;

          while (num > 0){
            rem = num % 10;
            if (rem == x){
                frequency += 1;
            }
            num = num / 10;
          }
          cout << num<< endl;
          cout << "                  "<<endl;
          cout << x<<" appeared "<< frequency<< " time(s) in "<<n<< endl;
    return 0;
}
