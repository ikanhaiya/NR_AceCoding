#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    int m;
    again:
    cout<<"Enter the value a and b\n";
    cin>>a>>b;
    cout<<" press 1 for sum  \n press 2 for subtraction \n press 3 for multiplication \n press 4 for division\n";
    cin>>n;
    switch(n){
         case 1:
         cout<<a+b;
         break;
         case 2:
         cout<<a-b;
         break;
         case 3:
         cout<<a*b;
         break;
         case 4:
         cout<<a/b;
         break;
         default:
         cout<< "not a valid operator";       
    }
    cout<<"\n Enter 1 for next calculation \n 2 to off the calculator ";
    cin>>m;
     if(m==1){
         goto again;
     }
}