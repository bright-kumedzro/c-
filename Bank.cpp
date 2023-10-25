#include <iostream>
using namespace std;
int main(){
double IntRate,IntAmt,TotalLoan;
double Interest;
double Months,MthInst,MonthsConver;
double loan;
cout<<"Please enter the amount of loan you need"<<endl;
cin>>loan;
cout<<"Please enter repayment period in months"<<endl;
cin>>Months;
cout<<"Please enter interest rate"<<endl;
cin>>IntRate;
MonthsConver=(Months/12);
Interest=(IntRate/100);
IntAmt=loan*MonthsConver*Interest;
TotalLoan=loan+IntAmt;
MthInst=double(Totalloan)/double(Months);
cout<<"Your Total loan(Interest Inclusive) is "<<TotalLoan<<"Ghc"<<endl;
cout<<"Your Total loan granted is "<<loan<<"Ghc"<<endl;
cout<<"Your Monthly Installments is "<<MthInst<<"Ghc per month"<<endl;


  return 0;
}