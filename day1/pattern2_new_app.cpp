#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int row=1;row<=n;row++){
        //print n-row number of spaces
        for(int i=1;i<=n-row;i++){
            cout<<" ";
        }
        //print row number of stars
        for(int i=1;i<=row;i++){
            cout<<"*";
        }
        
        //move to next line
        cout<<"\n";
    }
    return 0;
}
