#include <iostream>
using namespace std;

int main()
{
    int first_term,
        second_term,
        next_term=0,
        numberOfTerms,
        counter = 2;
        cout<<"Enter the first and second term of the fibonacci series repectfully\n";
        cout<<"press 'enter' after entering each term"<<endl;
        cin>>first_term>>second_term;
        cout<<"Enter the number of terms of the fibonacci sequence: ";
        cin>>numberOfTerms;
        cout<<first_term<<" "<<second_term<<" ";
        while(counter<=numberOfTerms)
        {
            next_term = first_term+second_term;
            counter++;
            cout<<next_term<<" ";
            first_term=second_term;
            second_term= next_term;
            next_term=0;
        }

}