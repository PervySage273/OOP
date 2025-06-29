#include <iostream>
#include <string>
using namespace std;
class STRING {
public:
    string getDivision(float percentage) {
        if (percentage >= 80)
            return "Distinction";
        else if (percentage >= 60)
            return "First Division";
        else if (percentage >= 45)
            return "Second Division";
        else if (percentage >= 35)
            return "Third Division";
        else
            return "Fail";
    }

    void displayResults(float percentage, string division) {
        cout << "Percentage : " << percentage << "%" << endl;
        cout << "Division   : " << division << endl;
        cout << "................Thank You................" << endl;
    }
};
class STUDENT {
private:
    string name;
    string rollNo;
    string subject[5];
    float marks[5];
    float percentage;
    STRING helper;

public:
    STUDENT() {
        float total = 0.0;

        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter roll number: ";
        getline(cin, rollNo);

        for (int i = 0; i < 5; i++) {
            cout << "Enter subject " << (i + 1) << " name: ";
            cin >> subject[i];
            cout << "Enter marks for " << subject[i] << ": ";
            cin >> marks[i];
            total += marks[i];
        }
        cin.ignore();

        percentage = total / 5.0;
    }

    void showResult() {
        string division = helper.getDivision(percentage);
        cout << "\n--- RESULT ---\n";
        helper.displayResults(percentage, division);
    }
};
int main() {
    STUDENT s1;         
    s1.showResult();    
    return 0;
}
