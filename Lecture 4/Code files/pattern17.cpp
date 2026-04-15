#include<iostream>
using namespace std;

int main(){

    // // Pattern 2: n= 3
    // //            A B C
    // //            B C D 
    // //            C D E

    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;

    int i = 1;
    
    

    while(i<=n){
        int j = 1;
        char character = 'A'+i-1;
        while(j<=n){
            cout<<character<<" ";
            character++;
            j++;
        }
        
        cout<<endl;
        i++;
    }
}