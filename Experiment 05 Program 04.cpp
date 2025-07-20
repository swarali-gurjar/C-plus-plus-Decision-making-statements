//calculator program:
#include<iostream>
using namespace std;
int main()
{
    int a,b,sum,sub,product,q,r;
    cout<<"Enter number 1:";
    cin>>a;
     cout<<"Enter number 2:";
     cin>>b;
 int choice;
 cout<<"1. Addition"<<endl<<"2. Subtraction"<<endl<<"3. Multiplication"<<endl<<"4. Quotient"<<endl<<"5. Remainder"<<endl;
 cout<<endl<<"enter your choice:"<<endl;
 cin>>choice;
 switch(choice)
 {
     case 1:
    sum=a+b;
     cout<<"Addition: "<<sum;
     break;
     case 2:
     sub=a-b;
     cout<<"Subtraction: "<<sub;
     break;
     case 3:
      product=a*b;
     cout<<"Multiplication: "<<product;
     break;
     case 4:
     q=a/b;
     cout<<"Quotient: "<<q;
     break;
     case 5:
     r=a%b;
     cout<<"Remainder: ";
 }
}
