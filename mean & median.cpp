#include <iostream>

using namespace std;

int main()
{
    int num , i;
    double meanValue , median, mode, n;
    meanValue = 0;
    median = 0;

    cout << "please enter the number of elements you have: "<<endl;
    cin >>num;

    int arrayOfNumbers[num];

    cout << "please enter the list of numbers in an\n";

    cout << " ascending or descending order: "<<endl;

        for(i= 0; i < num; i++){

                cin >> arrayOfNumbers[i];


           meanValue = meanValue + arrayOfNumbers[i];
        }

        meanValue = meanValue / num;

        if (num % 2 == 1){
            median = arrayOfNumbers[num / 2];
        }
        else{
            median = arrayOfNumbers[(num /2)-1] + arrayOfNumbers[((num-1 )/ 2) + 1];
            median = median / 2;
        }


       cout << "  "<<endl;
        cout << "The mean for this set of numbers is  "<<meanValue<<endl;
        cout << "  "<<endl;
        cout << "the median for the set of values is "<<median<<endl;
        cout << "mode is "<<mode<<endl;
    return 0;
}
