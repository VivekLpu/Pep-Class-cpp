/** 
#include <iostream>
using namespace std;

class Bottle{
    public:
    int height;
    int weight;
    int capacity;
    bool empty;

    Bottle(int height,int weight,int capacity){
        this->height = height;
        this->weight = weight;
        this->capacity = capacity;
        this->empty = true;
    }

    void OpenBottle(){
        cout<<"Bottle Opened"<<endl;
    }

    void closedBottle(){
        cout<<"Bottle Closed"<<endl;
    }

    void fillBottle(){
        empty = false;
        cout<<"Bottle Filled"<<endl;
    }

    void isEmpty(){
        if(empty){
            cout<<"Bottle is empty"<<endl;
        }else{
            cout<<"Bottle is not empty"<<endl;
        }
    }

};

int main(){

    Bottle bottle(10, 5, 2);
    cout <<bottle.weight<<endl;
    cout <<bottle.height<<endl;

    bottle.OpenBottle();
    bottle.isEmpty();
    bottle.fillBottle();
    bottle.isEmpty();
    bottle.closedBottle();

    return 0;
}
*/

/** 

#include <iostream>
using namespace std;

class Fan {
public:
    int speed;
    bool isOn;
    bool isOscillating;
    int timer;
    string brand;

    Fan(string brand) {
        this->brand = brand;
        this->speed = 0;
        this->isOn = false;
        this->isOscillating = false;
        this->timer = 0;
    }

    void turnOn() {
        isOn = true;
        cout << "Fan is turned on" << endl;
    }

    void turnOff() {
        isOn = false;
        cout << "Fan is turned off" << endl;
    }

    void setSpeed(int speed) {
        if (isOn) {
            this->speed = speed;
            cout << "Fan speed set to " << speed << endl;
        } else {
            cout << "Fan is off. Turn it on first." << endl;
        }
    }

    void startOscillation() {
        if (isOn) {
            isOscillating = true;
            cout << "Fan started oscillating" << endl;
        } else {
            cout << "Fan is off. Turn it on first." << endl;
        }
    }

    void stopOscillation() {
        isOscillating = false;
        cout << "Fan stopped oscillating" << endl;
    }

    void setTimer(int minutes) {
        if (isOn) {
            timer = minutes;
            cout << "Fan timer set to " << minutes << " minutes" << endl;
        } else {
            cout << "Fan is off. Turn it on first." << endl;
        }
    }
};

int main() {
    Fan fan("CoolBreeze");
    fan.turnOn();
    fan.setSpeed(3);
    fan.startOscillation();
    fan.setTimer(30);
    fan.stopOscillation();
    fan.turnOff();

    return 0;
}
*/

/** 

#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;
    string rollNumber;
    string course;
    float grade;

    Student(string name, int age, string rollNumber, string course, float grade) {
        this->name = name;
        this->age = age;
        this->rollNumber = rollNumber;
        this->course = course;
        this->grade = grade;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Course: " << course << endl;
        cout << "Grade: " << grade << endl;
    }

    void updateGrade(float newGrade) {
        grade = newGrade;
        cout << "Grade updated to: " << grade << endl;
    }
};

int main() {
    Student student("Vivek", 20, "CS101", "Computer Science", 3.5);
    student.displayDetails();
    student.updateGrade(3.8);
    student.displayDetails();

    return 0;
}

*/




#include <iostream>
using namespace std;
class Shape {
public:
    virtual double area() const = 0;
};

class Rectangle : public Shape {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double area() const override {
        return width * height;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double area() const override {
        return 0.5 * base * height;
    }
};

class Square : public Shape {
private:
    double side;
public:
    Square(double s) : side(s) {}
    double area() const override {
        return side * side;
    }
};

int main() {
    Rectangle r(3, 4);
    Triangle t(3, 4);
    Square s(4);

    Shape* shapes[] = {&r, &t, &s};

    for (int i = 0; i < 3; i++) {
        cout << "Area: " << shapes[i]->area() << endl;
    }

    return 0;
}