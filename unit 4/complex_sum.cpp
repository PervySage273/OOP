#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }

    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    // Corrected operator overloading
    Complex operator+(const Complex& ob) {
        Complex temp;
        temp.real = real + ob.real;
        temp.imag = imag + ob.imag;
        return temp;
    }

    int getReal(){return real;}
    int getImag(){return imag;}
};

int main() {
    Complex a(2, 3), b(3, 5);

    Complex ob = a + b;

    cout << "The sum of a and b is: " << ob.getReal() << " + " << ob.getImag() << "i" << endl;
    

    return 0;
}