#include<iostream>
using namespace std;
 
int main(){
    // // Pattern 2: n= 5
    // //            1
    // //            2 2 
    // //            3 3 3
    //               4 4 4 4
    //               5 5 5 5 5

    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;

    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}