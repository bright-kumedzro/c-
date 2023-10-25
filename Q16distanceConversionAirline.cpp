//this program converts distances from feets to miles,yards and feet 
#include <iostream>
using namespace std;
int main()
{
     int defaultDistance; // takes in the default distance in feets
     int miles=0, yards=0, feet=0,remainder=0;
     const int ONE_MILE_INFOOT  = 5280;
     const int ONE_YARD_INFOOT = 3;
     cout<< "please enter the distance: ";
     cin>> defaultDistance;
          
          
              miles = defaultDistance/ONE_MILE_INFOOT;
              remainder = defaultDistance - (miles * ONE_MILE_INFOOT);
              yards = remainder / ONE_YARD_INFOOT;
              remainder = remainder - (yards * ONE_YARD_INFOOT);
              feet = remainder;
              if (miles>0 && yards>0 && feet>1)
              cout << miles << " mile(s) "<<yards<<" yard(s) "<<feet<<" feet";
                  else if (miles>0 && yards>0 && feet==1)
                    cout<<miles<<" mile(s) "<< yards <<" yard(s) "<<feet<<" foot";
                    else if (miles==0 && yards>0 && feet>1)
                        cout <<yards<<" yard(s) "<<feet<<" feet";
                        else if(miles==0 && yards>0 && feet==1)
                         cout << miles << " mile(s) "<<yards<<" yard(s) "<<feet<<" foot";
                         else
                         cout<< "the input is invalid";


                     



        return 0;  
}