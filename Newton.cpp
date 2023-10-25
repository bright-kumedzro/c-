#include <iostream>
#include <cmath>
using namespace std;
int main(){
 long double BetterApproximation;
 long double OldApproximation;
  int number;
  double eqn;
  cout<<"Please enter the number"<<endl;
  cin>>number;
  cout<<"Please enter initial approximation"<<endl;
  cin>>OldApproximation;
   eqn=(double(number)/double(OldApproximation*OldApproximation));
   do{
  BetterApproximation=OldApproximation+(1/3*(eqn-OldApproximation));
   }
   while(BetterApproximation<0.000001);
  cout<<"The better approximation is "<<BetterApproximation;

}
