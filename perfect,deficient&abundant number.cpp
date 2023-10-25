#include <iostream>

using namespace std;

int main()
{
    int n , sum ;
    sum = 0;
    cout << "enter a number:  ";
    cin >> n;

      for (int i = 1; i < n; i++){
        if (n % i == 0 ){
            sum += i;
        }

      }
      cout << "the sum of the factors of "<<n<< " excluding "<<n<<" itself is "<<sum<<endl;

      if ( sum < n ){

        cout <<n<< " is deficient since the sum of its factors is less than "<<n<< " itself"<<endl;
      }
      else if (sum > n){
        cout <<n<< " is abundant since the sum of its factors is greater than "<<n<< " itself"<<endl;
      }
      else {
        cout <<n<< " is a perfect number since the sum of its factors is equal to "<<n<< " itself"<<endl;
      }
    return 0;
}
