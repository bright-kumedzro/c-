#include <iostream>
using namespace std;

int main()
{
    int number,
        rem = 0,
        sum = 0,
        originalNumber,
        counter = 0;
      cout<<"enter a positive number: ";
      cin>>number;
      originalNumber=number;
      if(number>=0)
      {
          while(number>0)
          {
              rem = number%10;
              sum +=rem;
              counter++;
              number = number/10;
          }
          cout<<"sum is "<<sum<<endl;
          cout<<"number of digits is "<<counter<<endl;
      }
}