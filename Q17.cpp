#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int CREDIT_HOUR = 1000;
    const int REGULAR_ROOM = 500000;
    const int AC_ROOM = 1000000;
    const int ACAD_FACILITIES = 500000;
    const int MATRICULATION_FEE = 200000;
    const int GRADUATION_FEE = 300000;
    int creditHours, IDnumber, fees;
    char roomType, graduatingStatus;
    
    cout << "Please enter a four digit ID number:  ";
    cin >> IDnumber;
    cout << "Enter number of credit hours taken: ";
    cin >> creditHours;
    cout <<"What kind of room do you live in?\n";
    cout <<"Enter R or A to indicate a regular or air-conditioned room respectifully:  ";
    cin>> roomType;
    cout<<"enter N or Y to indicate whether you have an impending\n"
        <<"matriculation or graduation: ";
    cin>> graduatingStatus;

      
       if (creditHours>=15 && creditHours<=21)
       {
          creditHours = creditHours * CREDIT_HOUR;
          if (roomType=='R' && graduatingStatus=='N'){
            fees = creditHours + REGULAR_ROOM + MATRICULATION_FEE +ACAD_FACILITIES;
            cout<<"Fees for the semester is "<<fixed<<showpoint<<setprecision(2)<<fees<<"GHS";
          }
            else if (roomType=='R' && graduatingStatus=='Y'){
               fees = creditHours+ REGULAR_ROOM+GRADUATION_FEE+ACAD_FACILITIES;
            cout<<"Fees for the semester is "<<fixed<<showpoint<<setprecision(2)<<fees<<"GHS";
            }
               else if (roomType=='A' && graduatingStatus=='N'){
               fees = creditHours+AC_ROOM+ MATRICULATION_FEE+ACAD_FACILITIES;
            cout<<"Fees for the semester is "<<fixed<<showpoint<<setprecision(2)<<fees<<"GHS";
               }
               else if (roomType=='A' && graduatingStatus=='Y'){
               fees = creditHours+AC_ROOM+ MATRICULATION_FEE +ACAD_FACILITIES;
                cout<<"Fees for the semester is "<<fixed<<showpoint<<setprecision(2)<<fees<<"GHS";

               }
               else
               cout<<"Invalid input for room type or graduating status ";

       }
       else 
          {
            cout<<"WARNING: You have taken less or more of the required credit hours" <<endl;
             creditHours = creditHours * CREDIT_HOUR;
          if (roomType=='R' && graduatingStatus=='N'){
            fees = creditHours + REGULAR_ROOM + MATRICULATION_FEE +ACAD_FACILITIES;
              cout<<"Fees for the semester is "<<fixed<<showpoint<<setprecision(2)<<fees<<"GHS";

          }
            else if (roomType=='R' && graduatingStatus=='Y'){
               fees = creditHours+ REGULAR_ROOM+GRADUATION_FEE+ACAD_FACILITIES;
            cout<<"Fees for the semester is "<<fixed<<showpoint<<setprecision(2)<<fees<<"GHS";
            }
               else if (roomType=='A' && graduatingStatus=='N'){
               fees = creditHours+AC_ROOM+ MATRICULATION_FEE+ACAD_FACILITIES;
            cout<<"Fees for the semester is "<<fixed<<showpoint<<setprecision(2)<<fees<<"GHS";
               }
               else if (roomType=='A' && graduatingStatus=='Y'){
               fees = creditHours+AC_ROOM+ MATRICULATION_FEE +ACAD_FACILITIES;
            cout<<"Fees for the semester is "<<fixed<<showpoint<<setprecision(2)<<fees<<"GHS";
               }
               else
               cout<<"Invalid input for room type or graduating status ";
          }
          return 0;
}