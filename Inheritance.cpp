#include <iostream>
using namespace std;

class Account{
    public:
    float salary = 60000;
};
class Programmer : public Account {
    public:
    float bonus = 5000;
};

// class Animal{
//     public:
//     void eat(){
//         cout<<"Eating..."<<endl;
//     }

// };

// class Dog: public Animal{
//     public:
//     void bark(){
//         cout<<"Barking..."<<endl;
//     }
// };

// class Cat: public Animal{
//     public:
//     void meow(){
//         cout<<"meo meo"<<endl;
//     }
// };

// class A{
//     int a=4;
//     int b=5;
//     public:
//     int mul(){
//         cout<<"In class A"<<endl;
//         int c = a*b;
//         cout<<"returning c"<<endl;
//         return c;
//     }
// };

// class B: public A{
//     public:
//     void display(){
//         cout<<"In class B"<<endl;
//         int result = mul();
//         cout<<"Multiplication of a and b is : "<<result<<endl;
//     }
// };

class Animal{
    public:
    void eat(){
        cout<<"Eating..."<<endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout<<"Barking..."<<endl;
    }
};

class babyDog : public Dog{
    public:
    void weep(){
        cout<<"Weeping..."<<endl;
    }
};

class A{
    protected:
    int a;
    public:
    void get_a(){
        cout<<"Enter the value of 'a' : "<<endl;
        cin>>a;
    }
};

class B : public A{
    protected:
    int b;
    public:
    void get_b(){
        cout<<"Enter the value of 'b' : "<<endl;
        cin>>b;

    }
};

class C{
    protected:
    int c;
    public:
    void get_c(){
        cout<<"Enter the value of 'c' : "<<endl;
        cin>>c;
    }
};



int main() {
    // Programmer p1;
    // cout<<"Salary: "<<p1.salary<<endl;
    // cout<<"Bonus: "<<p1.bonus<<endl;

    // Dog d1;Cat c1;
    // d1.eat();
    // d1.bark();
    // c1.eat();
    // c1.meow();

    // cout<<"In main"<<endl;
    // B b;
    // b.display();
    // b.mul();

    babyDog d1;
    d1.eat();
    d1.bark();
    d1.weep();


    return 0;
}


