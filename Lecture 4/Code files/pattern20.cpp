#include<iostream>
using namespace std;

int main(){

    // // Pattern 19: n= 3
    // //           1 1 1
    // //             2 2  
    // //               3  

    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;

    int i = 1;
    
    
    while(i<=n){
        int j = 1;
        int k = i+n-n-1;

        while(k){
            cout<<" ";
            k--;
        }

        while(j<=n-i+1){
            cout<<i;
            j++;
        }
        
        cout<<endl;
        i++;
    }

}
