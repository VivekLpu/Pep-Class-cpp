#include <iostream>
using namespace std;

void func(int *n){
    cout<<*n<<endl;
    *n+=*n;
    cout<<*n<<endl;
}
 void swap(int *a, int *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
int main(){
    int n; int *ptr;
    cout<<"Enter a number: ";
    cin>>n;
    ptr = &n;
    
    func(&n);
   
   

    int x, y;
    cout << "Enter two numbers to swap: ";
    cin >> x >> y;

    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(&x, &y);
    cout << "After swap: x = " << x << ", y = " << y << endl;



}