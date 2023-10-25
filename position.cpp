#include <iostream>

using namespace std;

int main()
{
  int n , num, position, i ;
  position = 0;
  cout << "please enter the number of elements:  ";
  cin >> n;

  int arr[n];
  cout << "                                    "<<endl;
  cout << "please enter the number that you want to find it's position  ";
  cin >> num ;
  cout << "                                    "<<endl;
  cout<< "enter the list of numbers: "<<endl;
  for(i = 0; i < n; i++ ){

    cin >> arr[i];

    if (arr[i] == num){
        position = i + 1;
    }

  }

    cout << "the last position of  "<<num<<" in this list of numbers is "<<  position<<endl;
  return 0;
}
