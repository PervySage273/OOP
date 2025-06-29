#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class student
{
    string name;
    double *marks;
public:
    void displaycertificate();
    student(string n)
    {
        name = n;
        marks = new double[5];
    }
    void input_marks();
    double getpercentage();
};
string getdivision(double percentage)
{
    if (percentage >= 60)
        return "First Division";
    else if (percentage >= 50)
        return "Second Division";
    else if (percentage >= 40)
        return "Third Division";
    else
        return "Fail";
}
void student::input_marks()
{
    cout << "Enter marks in 5 sub" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
}
double student::getpercentage()
{
    double total = 0;
    for (int i = 0; i < 5; i++)
    {
        total = total + marks[i];
    }
    return total / 5;
}
void student::displaycertificate()
{
    cout << "Name:" << name << endl;
    cout << setw(50) << setfill('-') << "" << endl;
    cout << setfill(' ') << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << setw(20) << i << setw(30) << marks[i] << endl;
    }
    cout << setw(50) << setfill('-') << "" << endl;
    cout << setfill(' ') << endl;
    double percentage = getpercentage();
    cout << "Percentage: " << fixed << setprecision(2) << percentage << "%" << endl;
    cout << "Division: " << getdivision(percentage) << endl;
}
int main()
{
    string student_name;
    cout << "Enter student name:" << endl;
    cin >> student_name;
    //student s1
    student s1(student_name);
    s1.input_marks();
    s1.displaycertificate();
    return 0;
}
