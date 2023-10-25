#include <iostream>
#include <cmath>
using namespace std;
  // name : Asomani Nathaniel Okyere
  // index num : 4235220
  // group 2C
int main()
{
  int num, binary, arr[1000], binaryCount=0;
  cout << "enter the decimal number to be converted to binary: ";
  cin >> num;


  while (num > 0)
  {
      binary = num % 2;
     arr[binaryCount]=binary;
     binaryCount++;
         num = num /2;

  }
  for(int i = binaryCount-1; i>=0; i--)
  {
       cout<<arr[i];
  }


cout << "\n";

  int n, i=0, decimal=0;
  cout << "please enter the number of elementes in the binary number:";
  cin >> n;
    int BinNum[num];
  cout << "now enter the list of numbers \n";
   while (n>0)
   {
       cin>> BinNum[i];

       decimal += BinNum[i] * pow(2, n);
       n=n-1;
        BinNum[i]++;
   }
       decimal = decimal / 2;
        cout << "the decimal for the binary is "<< decimal<<endl;
    return 0;
}
