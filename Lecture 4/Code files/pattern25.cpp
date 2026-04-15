#include<iostream>
using namespace std;

int main(){

    // // Pattern 25: n=3;
    //     123321
    //     12*21
    //     1**1

    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;

    int i = 1;

    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j++;
        }

       int l = 2*(i-1);
       
       while(l){
        cout<<"*";
        l--;
       }


        int k=1;
        while(k<=n-i+1){
            j--;
            cout<<j;
            k++;
        }


        cout<<endl;
        i++;

    }
}