#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n;
    cout<<"Enter the number you want to search : ";
    cin>>n;
    int size = sizeof(arr)/sizeof(n);
    bool found = false;
    for(int i=0; i<size; i++){
        if(arr[i] == n){
            cout<<"Element found at index : "<<i<<endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout<<"Element not found"<<endl;
    }
    return 0;
}