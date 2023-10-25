#include <iostream>
#include <cmath>

using namespace std;
double mean (double  [], int );
double median (double [], int);
double sdv (double [], double);

int n, i;

int main()
{

    double sum = 0;
    cout << "number of elements: ";
    cin >> n;
  double arr[n];
  cout << "enter a list of numbers "<<endl;
  for (i = 0; i < n; i++){
    cin >> arr[i];
  }
    double m=mean(arr , n);
    double a = median(arr, n);
    double c = sdv(arr , m);
    cout << "mean is "<< m<<endl;
    cout << "median is "<< a <<endl;
    cout << "standard deviation is "<< c << endl;
    return 0;
}

   double mean(double j[], int n)
 {
     double sum = 0;
     for (int i =0; i < n; i++){
        sum += j[i];
     }
     sum = sum / n;
        return sum;
 }

  double median ( double j[], int n)
 {

      double med = 0;
      if (n % 2 == 1){
        med = j[n/2];

      }
      else{
        med =j[(n/2)-1] + j[((n-1)/2)+1];
        med = med/2;
      }
      return med;
  }

 double sdv (double j[], double mean )

 {

     double diff = 0, x=0;
      for ( i = 0; i < n; i++ ){
        diff = j[i] - mean;
        diff = diff * diff;
        x = x + diff;
     }
     return (sqrt(x / n));
  }

