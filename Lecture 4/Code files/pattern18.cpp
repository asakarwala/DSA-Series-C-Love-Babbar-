#include<iostream>
using namespace std;

int main(){

    // // Pattern 18: n= 3
    // //               *
    // //             * * 
    // //           * * *

    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;

    int i = 1;
    
    

    // while(i<=n){
    //     int j = 0;
    //     int k = 1;
    //     while(j<n-i){
    //         cout<<" ";
    //         j++;
    //     }
    //     while(k<=i){
    //         cout<<"*";
    //         k++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // Second way to solve
    while(i<=n){
        int j = n-i;
        int k = 1;
        while(j){
            cout<<" ";
            j--;
        }
        while(k<=i){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
}