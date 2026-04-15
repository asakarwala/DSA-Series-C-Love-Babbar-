#include<iostream>
using namespace std;
 
int main(){
    // // Pattern 2: n= 3
    // //            A 
    // //            B B 
    // //            C C C

    int n;
    cout<<"Enter the Number:"<<endl;
    cin>>n;

    int i = 1;
    
    

    while(i<=n){
        int j = 1;
        while(j<=i){
            char character = 'A'+i-1;
            cout<<character<<" ";
            character++;
            j++;
        }
        
        cout<<endl;
        i++;
    }
}