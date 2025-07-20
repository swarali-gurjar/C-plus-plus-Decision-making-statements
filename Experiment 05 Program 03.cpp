#include <iostream>
using namespace std;
int main ()
{
    int number1, number2, number3;
    cout<<"Enter the first number: ";
    cin>>number1;
    cout<<"Enter the second number: ";
    cin>>number2;
    cout<<"Enter the third number: ";
    cin>>number3;

    if(number1>number2) {
        if(number1>number3) {
            cout<<number1<<" is the greatest number."<<endl;
        }
        else {
            cout<<number3<<" is the greatest number."<<endl;
        }
    }
    else if (number2>number1) {
        if(number2>number3) {
            cout<<number2<<" is the greatest number."<<endl;
        }
        else {
            cout<<number3<<" is the greatest number."<<endl;
        }
    }
    else {
        cout<<"All three numbers are equal.";
    }

}
