#include <iostream>

using namespace std;

int main()
{
    int number , absValue;
    cout << " enter number:  ";
    cin >> number;
     if (number >= 0){
        absValue = number;

     }
     else {
        absValue = number * -1;
     }
     cout << "  "<<endl;
    cout << absValue<< endl;
    return 0;
}
