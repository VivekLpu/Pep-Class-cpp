#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called!" << endl;
    }

    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called!" << endl;
    }

    ~Student() {
        cout << "Destructor called for " << name << endl;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;
    s1.display();

    Student s2("Vivek", 21);
    s2.display();

}
