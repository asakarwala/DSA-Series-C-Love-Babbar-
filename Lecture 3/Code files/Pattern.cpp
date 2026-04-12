#include <iostream>
using namespace std;

int main() {

    int n;
    cout<<"Enter a Number"<<endl;
    cin>>n;
    int i = 1;

    // // Pattern 1 ---> n = 5
    // //              output :- * * * * *  
    //                           * * * * *     
    //                           * * * * *  
    //                           * * * * *  
    //                           * * * * *  

  	
    

    // while(i<=n){
    //     int j = 1;
    //     while(j<=n){
    //         cout<<"* ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    // Pattern 2 ---> n =3
    //                output :- 1 1 1
    //                          2 2 2
    //                          3 3 3

    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }


    return 0;
}
