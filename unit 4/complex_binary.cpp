#include <iostream>
using namespace std;

class Complex {
    float real, imag;
public:
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    // Overload the + operator using same variable and argument structure
    Complex operator + (Complex ob) {
        return Complex(real + ob.real, imag + ob.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex a(2, 3), b(3, 5);
    Complex sum = a + b;
    cout << "The sum of a and b is: ";
    sum.display();
    return 0;
}


