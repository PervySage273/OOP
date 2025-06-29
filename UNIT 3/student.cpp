#include<iostream>
using namespace std;
class Student {
private:
    string name;
    int age;
    float marks;
public:
    void setName(string n) {
        name = n;
    }
    void setAge(int a) {
        age = a;
    }
    void setMarks(float m) {
        marks = m;
    }
    float getPercentage() {
        return (marks / 100) * 100;  
    }
    void displayInfo() {
        cout << "Name:"<< name << endl;
        cout << "Age:"<< age << endl;
        cout << "Marks:"<< marks << endl;
        cout << "Percentage:"<< getPercentage()<<"%"<<endl;
    }
};
int main() {
    Student s1;
    s1.setName("JEEWAN");
    s1.setAge(18);
    s1.setMarks(75);
    cout << "Student Details:" << endl;
    s1.displayInfo();
    return 0;
}
