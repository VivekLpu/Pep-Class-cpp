#include <iostream>
using namespace std;
int main(){
    int p,r,t;
    cout <<"Enter Principle(In Rupees): ";
    cin>>p;
    cout<<"Enter Rate(In percentage): ";
    cin>>r;
    cout<<"Enter Time(In years): ";
    cin>>t;
    double sI = (p*r*t)/100;
    cout<<"Simple Interest: "<<sI<<" Rupees"<<endl;
}