#include<iostream>
using namespace std;

int main(){

    // // Pattern 23: n= 3
    // //               1
    // //             1 2 1 
    // //           1 2 3 2 1

    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;

    int i = 1;
    
    while(i<=n){
        int j = n-i;
        int k = 1;
        int l = i+n-n-1;
        while(j){
            cout<<" ";
            j--;
        }
        while(k<=i){
            cout<<k;
            k++;
        }
        while(l){
            cout<<l;
            l--;
        }


        cout<<endl;
        i++;
    }
}