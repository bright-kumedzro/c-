#include <iostream>

using namespace std;

int main()
{
    int numOfEmployees,children, hours,  i , x;
    char isMale = 'M';
    double netpay, grosspay, districttax , levy ,incometax, edufund;

    cout << "please enter the number of employees:   ";

    cin >> numOfEmployees;

    for (i = 0; i < numOfEmployees; i++){
        cout << "please enter 1, 2 ,3...to indicate the specific employee:  ";
        cin >> x;
        cout << "enter hours worked: ";
        cin >> hours;
        cout << "enter number of children:  ";
        cin >> children;
        cout << "enter M or F to indicate sex of employee:   ";
        cin >> isMale;

              if(isMale=='M'){
              if(hours<=40){
                 grosspay= hours *500;
                 incometax=0.15*grosspay;
                 districttax=0.01*grosspay;
                 levy=0.025*grosspay;
                         if(children<=3){
                            edufund = 0;
                         }
                         else{
                            edufund=(children-3)*10;
                         }
                      netpay=grosspay-(incometax+districttax+levy+edufund);

              }
                    else{

             grosspay=(((hours-40)*750)+(40*500));
             incometax=0.15*grosspay;
             districttax=0.01*grosspay;
             levy=0.025*grosspay;
                        if(children<=3){
                            edufund=0;
                        }
                        else {
                            edufund = (children-3)*10;
                        }
                    }
             netpay=grosspay-(incometax+districttax+levy+edufund);

               }
                else{
                     if(hours<=40) {

                    grosspay=hours*550;
                    incometax=0.15*grosspay;
                    districttax=0.01*grosspay;
                    levy=0.025*grosspay;

                    if (children <= 3){
                        edufund = 0;
                    }
                    else  edufund=(children-3)*20;
                      netpay=grosspay-(incometax+districttax+levy+edufund);
                     }


                     else {
                             grosspay=(((hours-40)*825)+(550*40));
                             incometax=0.15*grosspay;
                             districttax=0.01*grosspay;
                             levy=0.025*grosspay;
                                if(children<=3){
                                    edufund=0;
                                }
                                else{
                                    edufund=(children-3)*20;

                                }
                }
                    netpay=grosspay-(incometax+districttax+levy+edufund);
      }
                   cout <<"                                           "<<endl;
                   cout <<"                                           "<<endl;
                     cout << "Pay cheque of employee "<<x<< " is as follows: \n";
                     cout <<"                                           "<<endl;
                      cout << "grosspay of employee is                  "<<grosspay<<" GHS"<<endl;
                      cout <<"                                           "<<endl;
                      cout <<"income tax of employee is                "<<incometax<<" GHS"<<endl;
                      cout <<"                                           "<<endl;
                 cout <<"amount deducted for district tax is      "<<districttax<<" GHS"<<endl;
                 cout <<"                                           "<<endl;
                 cout << "National health contribution levy is     "<<levy<<" GHS"<<endl;
                 cout <<"                                           "<<endl;
                      cout <<"amount paid for edufund is               "<<edufund<<" GHS"<<endl;
                      cout <<"                                           "<<endl;
                      cout <<"netpay of employee is                    "<<netpay<<" GHS"<<endl;
                      cout << "                                 "<<endl;
                      cout << "                                 "<<endl;

    }

    return 0;
}
