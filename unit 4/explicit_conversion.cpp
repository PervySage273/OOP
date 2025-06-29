#include<iostream>
using namespace std;

int main() {
    double num1 = 20.23;
    int num2 = (int)num1; // Explicit conversion from double to int
    cout << "num2=" << num2 << endl;

    int num3 = int(num1); // Another way of explicit casting
    cout << "num3=" << num3 << endl;

    double a = 20.05;
    int b = static_cast<int>(a); // Using static_cast for explicit conversion
    cout << "a=" << a << ", b=" << b << endl;

    return 0;
}