#include<iostream>
using namespace std;

int main(){

// Pattern 26 n = 3
// *
// **
// ***
// ***
// **
// *

    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;

    int i = 1;
    
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }


    i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n-i+1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}