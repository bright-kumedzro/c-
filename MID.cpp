#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sl;
    int m,n;
    cout<<"enter string: ";
    cin>>sl;
    cout<<"enter m and n respectively"<<endl;
    cin>>m>>n;
    for(int i=0; i<sl.size(); i++)
    {
        if(i>=m && i<(m+n))
        cout<<sl[i];
    }
      cout<<endl;
}
