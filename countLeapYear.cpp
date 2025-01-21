#include <iostream>
using namespace std;

bool isLeapYear(int year){
    if(year%4 != 0){
        return false;
    }else if(year%100 != 0){
        return true;
    }else if(year%400 != 0){
        return false;
    }else{
        return true;
    }
}
int main(){
    int startYear,endYear;
    cout <<"Enter Starting year: ";
    cin>>startYear;
    cout<<"Enter Ending year: ";
    cin>>endYear;

    int count = 0;
    for(int year=startYear; year<= endYear; year++){
        if(isLeapYear(year)){
            count++;
        }
    }

    cout<<"Total leap years between "<<startYear<<" and "<<endYear<<" : "<<count<<endl;

}