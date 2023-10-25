#include <iostream>

using namespace std;

int main()
{
  int num , num1, num2, x, rem, evensum = 0, oddsum = 0;
  cout << "enter the figure:    ";
  cin >> num;
  cout << "Input n; the 1st n even and odd numbers you're looking for:  "<<endl;
  cin >> x;
  cout << "enter the part of the figure that covers the 1st n even numbers  ";
  cin >> num1;
     while(num1 > 0){
        rem = num1 % 10 ;
           if(rem % 2 == 0){
               evensum = rem + evensum;

           }
           num1 = num1 / 10;
     }
      cout <<"the sum of the 1st "<<x<<" even numbers in "<<num<<" is "<<evensum<<endl;


     cout << "please enter the part of the figure which covers the 1st n odd numbers    ";
     cin >> num2;
               while(num2 > 0){
            rem = num2 % 10;
               if(rem % 2 > 0){
                oddsum = oddsum + rem;

            }
           num2 = num2 / 10;
         }

         cout <<"the sum of the 1st "<<x<<" odd numbers in "<<num<<" is "<<oddsum<<endl;

    return 0;
}
