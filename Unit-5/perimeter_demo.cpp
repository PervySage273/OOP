#include<iostream>
using namespace std;
class Shape {
protected:
    int length;
    int breadth;
public:
    Shape(int l = 0, int b = 0) : length(l), breadth(b) {}
    void display() {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(int l, int b) : Shape(l, b) {}
    int getPerimeter() {
        return 2 * (length + breadth);
    }
};

class Square : public Shape {
public:
    Square(int side) : Shape(side, side) {}
    int getPerimeter() {
        return 4*length;
    }
};

int main() {
    Rectangle rect(5, 4);
    Square square(10);

    cout << "Rectangle Perimeter: " << rect.getPerimeter() << endl;
    cout << "Square Perimeter: " << square.getPerimeter() << endl;

    return 0;
}