#include<iostream>
using namespace std;
 
int main(){
    // // Pattern 2: n= 3
    // //            A A A
    // //            B B B 
    // //            C C C 

    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;

    int i = 1;
    

    while(i<=n){
        int j = 1;
        char character = 'A';
        while(j<=n){
            cout<<character<<" ";
            character++;
            j++;
        }
        
        cout<<endl;
        i++;
    }
}