#include <iostream>
using namespace std;
int main(){


    for(int i=1; i<=5; i++){
        for(int j = 1; j<=i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    // int n = 3; 

    // for (int i = 0; i < n; ++i) {
    //     for (int j = 0; j <= i; ++j) {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    
    // int n = 5; 

    // for (int i = 1; i < n; ++i) {
    //     for (int j = 1; j <= n; ++j) {
    //         if (j <= (n - i)) {
    //             cout << i << " ";
    //         } else {
    //             cout << j << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // int n = 5;
    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // int n = 5;
    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<n-i;j++){
    //         cout<<" ";
    //     }
    //     for(int j=0;j<i;j++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }


    // int n = 5;
    // for (int i = 1; i <= n; i++) {
        
    //     for (int j = 0; j < n - i; j++) {
    //         cout << " ";
    //     }
        
    //     for (int j = 0; j < i; j++) {
    //         cout << char('A' + i - 1) << " ";
    //     }
    //     cout << endl;
    // }


  
    // int rows = 4; 
    
    // for (int i = 1; i <= rows; i++) {
    //     for (int j = 1; j <= rows - i; j++) {
    //         cout << "   ";
    //     }
    //     for (int j = 1; j <= i; j++) {
    //         cout << "*  ";
    //     }
    //     cout << endl; 
    // }
    

    int rows = 3; 
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << "   ";
        }
        
        char letter = 'A';
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << letter << "  ";
            letter++;
        }
        cout << endl; 
    }
    return 0;
}

  






