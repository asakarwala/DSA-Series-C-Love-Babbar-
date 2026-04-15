#include<iostream>
using namespace std;

int main(){

    // // Pattern 18: n= 3
    // //               1
    // //             2 2 
    // //           3 3 3

    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;

    int i = 1;
    
    while(i<=n){
        int j = n-i;
        int k = 1;
        while(j){
            cout<<" ";
            j--;
        }
        while(k<=i){
            cout<<i;
            k++;
        }
        cout<<endl;
        i++;
    }
}