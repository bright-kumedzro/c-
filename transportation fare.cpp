         #include <iostream>

using namespace std;

int main()
{

   double distance , fare,  fixed_price;
     fixed_price = 2000;
     cout << " enter the distance traveled:    ";
     cin >> distance;

     if (distance <= 10){

       fare = fixed_price;
     }
     else if(distance <= 40){
         fare   = 100 + fixed_price;

     }
     else if ( distance <= 150){
            fare =  + fixed_price + 275;

     }

     else {
            fare = fixed_price + 325;

     }
         cout << " "<<endl;
        cout << "distance traveled is "<<distance<< "km"<<endl;
        cout << " "<<endl;
         cout << "transport fare for this distance is "<<fare<< " cedis"<<endl;
       return 0;
}
