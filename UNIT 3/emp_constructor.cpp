#include<iostream>
#include<string>
using namespace std;

class Employee {
    string name;
    double salary;
public:
Employee()
{
   name="JAVEN";
   salary = 100;

}
Employee(string n,double sal)
{
    name="n";
    salary=sal;
}
    // void setName(string n) { name = n; }
    string getName() { return name; }

    // void setSalary(double sal) { salary = sal; }
    double getSalary() { return salary; }
};

int main() {
    Employee ob1,ob2("OBITO",10000),ob3,ob4("RIN",4500);
    // ob.setName("Ram");
    // ob.setSalary(1000);
    // cout << "name: " << ob.getName() << " salary: " << ob.getSalary() << endl;
    return 0;
}
