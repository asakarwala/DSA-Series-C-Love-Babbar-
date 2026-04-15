#include<iostream>
using namespace std;

int main(){

    // // Pattern 2: n= 3
    // //            C 
    // //            B C  
    // //            A B C

    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;

    int i = 1;
    
    

    while(i<=n){
        int j = 1;
        char character = 'A'+n-i;
        while(j<=i){
            cout<<character<<" ";
            character++;
            j++;
        }
        
        cout<<endl;
        i++;
    }
}