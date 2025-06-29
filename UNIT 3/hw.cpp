#include <iostream>
#include <iomanip>
using namespace std;
class Student {
    string name;
    string rollNo;
    string subjects[5];
    float marks[5];
    float totalMarks;
    float percentage;
    string division;
    public:
    void getData() {
        name = "JAVEN";
        rollNo = "14";

        subjects[0] = "MATH";
        subjects[1] = "SCIENCE";
        subjects[2] = "SOCIAL";
        subjects[3] = "ENGLISH";
        subjects[4] = "NEPALI";

        marks[0] = 75;
        marks[1] = 70;
        marks[2] = 65;
        marks[3] = 90;
        marks[4] = 85;
    }
     void calculate() {
        totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];
        }
        percentage = totalMarks / 5;

        if (percentage >= 80)
            division = "Distinction";
        else if (percentage >= 60)
            division = "First Division";
        else if (percentage >= 45)
            division = "Second Division";
        else if (percentage >= 35)
            division = "Third Division";
        else
            division = "Fail";
    }


    void displayResult() {
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << rollNo << endl;

        cout << "\nS.N  " << setw(10) << "Subject" << setw(10) << "Full M" << setw(10) << "Obt M" << endl;
        for (int i = 0; i < 5; i++) {
            cout << setw(2) << i + 1 << setw(12) << subjects[i] << setw(10) << 100 << setw(10) << marks[i] << endl;
        }

        cout << "\nTotal Marks: " << totalMarks << " / 500" << endl;
          cout << "Percentage : " << percentage << "%" << endl;
        cout << "Division   : " << division << endl;
        cout << "\n--- Thank you ---" << endl;
    }
};

int main() {
    Student s;
    s.getData();
    s.calculate();
    s.displayResult();
    return 0;
}