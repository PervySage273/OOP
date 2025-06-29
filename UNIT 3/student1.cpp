#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int age;
    float marks[5];

public:
    void setName(string n);
    void setAge(int a);
    void setMarks();
    float getPercentage();
    void display();
};

void Student::setName(string n) {
    name = n;
}

void Student::setAge(int a) {
    age = a;
}

void Student::setMarks() {
    cout << "Enter marks of 5 subjects for " << name << ":" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }
}

float Student::getPercentage() {
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += marks[i];
    }
    return (sum / 500) * 100;
}

void Student::display() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Percentage: " << getPercentage() << "%" << endl;
}

int main() {
    Student s1, s2;

    s1.setName("JEEWAN");
    s1.setAge(18);
    s1.setMarks();
    s1.display();

    s2.setName("Jane");
    s2.setAge(19);
    s2.setMarks();
    s2.display();

    return 0;
}
