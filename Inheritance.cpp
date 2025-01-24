#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "I can eat!" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "I can bark! Woof woof!" << endl;
    }
};

class Account{
    public:
    float salary = 60000;
};
class Programmer : public Account {
    public:
    float bonus = 5000;
};


int main() {
    Dog myDog;
    myDog.eat();  
    myDog.bark(); 

    Programmer p1;
    cout<<"Salary: "<<p1.salary<<endl;
    cout<<"Bonus: "<<p1.bonus<<endl;
    return 0;
}


