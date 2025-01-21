#include <iostream>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);

    for(int i=0; i<str.size();i++){
        str[i] = tolower(str[i]);
    }

    int count = 0;
    char vowels[] = {'a','e','i','o','u'};

    for(int i=0; i<str.size(); i++){
        for(int j = 0; j<5; j++){
            if(str[i] == vowels[j]){
                count++;
                break;
            }
        }
    }

    cout<<"Vowels in this String: "<<count<<endl;
    
}