#include<iostream>
using namespace std;

int main(){

    // // Pattern 23: n= 3
    // //               1
    // //             2 3 
    // //           4 5 6

    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;

    int i = 1;
    int value = 1;
    
    while(i<=n){
        int j = n-i;
        int k = 1;
        while(j){
            cout<<" ";
            j--;
        }
        while(k<=i){
            cout<<value;
            value++;
            k++;
        }
        cout<<endl;
        i++;
    }
}