#include<iostream>
using namespace std;
 
int main(){
    // // Pattern 2: n= 3
    // //            A 
    // //            B C 
    // //            D E F

    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;

    int i = 1;
    char character = 'A';
    

    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<character<<" ";
            character++;
            j++;
        }
        
        cout<<endl;
        i++;
    }
}