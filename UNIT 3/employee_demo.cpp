#include<iostream>
#include<string>
using namespace std;

class Employee {
    string name;
    double salary;
public:
    void setName(string n) { name = n; }
    string getName() { return name; }

    void setSalary(double sal) { salary = sal; }
    double getSalary() { return salary; }
};

int main() {
    Employee ob;
    ob.setName("Ram");
    ob.setSalary(1000);
    cout << "name: " << ob.getName() << " salary: " << ob.getSalary() << endl;
    return 0;
}
