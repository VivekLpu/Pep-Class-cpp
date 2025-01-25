#include <iostream>
using namespace std;

void printPrimeNumbers(int n){
    int i, j;
    for(i=2; i<=n; i++){
        for(j=2; j<=i; j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cout<<"Enter a positive number: ";
    cin>>n;
    printPrimeNumbers(n);
    return 0;
}