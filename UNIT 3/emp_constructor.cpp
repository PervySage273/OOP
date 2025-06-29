#include<iostream>
#include<string>
using namespace std;

class Employee {
    string name;
    double salary;
public:
    Employee() {
        name = "JAVEN";
        salary = 100;
    }

    Employee(string n, double sal) {
        name = n;  // fixed: now uses the parameter, not the literal "n"
        salary = sal;
    }

    string getName() { return name; }
    double getSalary() { return salary; }

    void display() {
        cout << "Name: " << name << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee ob1, ob2("JAVEN", 10000), ob3, ob4("JAVEN", 4500);

    ob1.display();
    ob2.display();
    ob3.display();
    ob4.display();

    return 0;
}