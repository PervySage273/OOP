#include<iostream>
using namespace std;
class Distance {
    int centimeters;
    float meters;
public:
    Distance() {
        centimeters = -1; // Default value for centimeters
        meters = -1.0; // Default value for meters
    }
    Distance(int cm) {
        centimeters = cm; // Constructor to initialize from centimeters
        meters = cm / 100.0; // Convert centimeters to meters
    }
    void display() {
        cout << "Distance in centimeters: " << centimeters << endl;
        cout << "Distance in meters: " << meters << endl;
    }
};
int main(){
    Distance obj = 125; // Implicit conversion from int to Distance
    obj.display(); // Display the distance in both centimeters and meters
    Distance obj2; // Default constructor       
    obj2.display(); // Display the default values
    Distance obj3(200); // Explicit conversion from int to Distance 
    return 0 ;
}