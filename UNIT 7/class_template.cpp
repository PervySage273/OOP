//c++ program for class template
#include<iostream>
#include<string>
using namespace std;

template<class P,class Q>
class Employee{
    string name;
    double salary;
    public:
    Employee(P name,Q salary){
        this->name=name;
        this->salary=salary;
    }
    void display()
    {
        cout<<"Name:"<<this->name<<endl;
        cout<<"Salary:Rs."<< this->salary<<endl;
    }
};
int main()
{
    Employee <string,double> ob("ram",1000);
    ob.display();
    return 0;
}