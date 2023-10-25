#include <iostream>

using namespace std;

int main()
{
    int number ,
             i,//variable to iterate from 2 to the number
             k,//this variable iterates from 1 to the particular "i" we're
               //working with at the moment
            fact_count=0,//counts the number of factors in each of the numbers
                          //ranging from 2 to the number entered by the user
              prime_count=0,//this one tells us the number of prime numbers we've had
              arrPrime[1000],// this array stores whatever prime number we get
                            // we'll sort the twin prime numbers from this array of prime numbers
                            //between 2 to the number entered by the user
                       j=0;// array index
   cout << "enter number: ";
        cin >> number;
        for (i = 2; i<=number; i++)
        {
            for(k =1; k<=i; k++)
            {
                if(i % k == 0)
                {
                    fact_count += 1;       // 2,3,5,7,11,13,19,23,29,31,37
                }                         //twin prime numbers here are;
            }                            // 5 & 7,11 & 13,29 *31
            if (fact_count == 2)
            {
                arrPrime[j] = i;
                   j++;
                prime_count +=1;
            }
             fact_count = 0; // set factor_count to zero in for the next i that will be checked

        }
  cout<< "The list of prime numbers are; "<<endl;
      for (j=0; j<prime_count; j++)
      {
           cout<<arrPrime[j]<< " ";
      }
      cout<< "\nAnd the twin prime numbers among them are;"<<endl;
     for(j=0; j<prime_count; j++)
     {
          if (arrPrime[j+1] == arrPrime[j]+2)
      {
          cout << arrPrime[j]<<" and "<<arrPrime[j+1]<<endl;

      }
     }


    return 0;
}
