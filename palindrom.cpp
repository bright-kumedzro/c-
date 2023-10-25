#include <iostream>
using namespace std;
int main()
{
    int   number, 
          original_Number,
          counter=0,
          count=0,
          rem;
    cout<<"input number: ";
    cin>> number;
         number = number/10;
       int  numcheck = number;
         while(numcheck>0)
         {
             numcheck = numcheck/10;
            counter++;
         }

   while(count<counter)
   {
       int rem =number%10;
       
       cout<<rem;
       count++;
       number= number/10;
   }
   cout<<endl;
} 