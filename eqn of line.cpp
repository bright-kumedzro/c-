#include <iostream>
using namespace std;
int main(){
 int x1,y1,x2,y2;
 double m,M,b,B,C;
 string X="x";
 string Y="y";
  cout<<"The form is y=ax+b"<<endl;
 cout<<"Please enter the value of x1"<<endl;
 cin>>x1;
 cout<<"Please enter the value of x2"<<endl;
 cin>>x2;
 cout<<"Please enter the value of y1"<<endl;
 cin>>y1;
 cout<<"Please enter the value of y2"<<endl;
 cin>>y2;
   if(y1>=0 || x1>=0){
    m=double(y2-y1)/double(x2-x1);
    M=(10/10)*m;
     B=(-m*x1+y1);
     cout<<"By comparing a is "<<M<<" and b is "<<B<<endl;
     if(B>=0){
     cout<<"y="<<M<<"x+"<<B;
     }
     else{
        cout<<"y="<<M<<"x"<<B;
     }
   }
   else{
    m=double(y2-y1)/double(x2-x1);
    M=(10/10)*m;
    b=(m*-1*x1)+y1;
    cout<<"By comparing a is "<<M<<" and b is "<<b<<endl;
    if(b>=0){
     cout<<"y="<<M<<"x+"<<b;
     }
     else{
        cout<<"y="<<M<<"x"<<b;
     }
   }



  return 0;
}
