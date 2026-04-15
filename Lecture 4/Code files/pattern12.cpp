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
        while(j<=n){
            char character = 'A'+i+j-2;
            cout<<character<<" ";
            character++;
            j++;
        }
        
        cout<<endl;
        i++;
    }
}