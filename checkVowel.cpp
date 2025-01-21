#include <iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter a character : ";
    cin>>c;

    char vowels[]={'a','e','i','o','u','A','E','I','O','U'};
    bool flag = false;
    for(int i=0; i<10; i++){
        if(vowels[i] == c){
            flag  = true;
        }
    }
    if(flag){
        cout<<"It is a vowel"<<endl;
    }else{
        cout<<"It is not a vowel"<<endl;
    }


}