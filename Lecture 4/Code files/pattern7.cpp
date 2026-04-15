#include<iostream>
using namespace std;
 
int main(){
    // // Pattern 2: n= 4
    // //            1
    // //            2 3 
    // //            3 4 5 
    //               4 5 6 7

    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;

    int i = 1;
    int count = 1;

    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<i-1+j<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}