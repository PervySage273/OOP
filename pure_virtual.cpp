#include<iostream>
using namespace std;
class Shape{ //abstract class
  // Pure virtual function makes this class abstract
    public:
  virtual  int getArea() = 0; // Pure virtual function
    virtual ~Shape() {} // Virtual destructor for proper cleanup
};
class Rectangle:public Shape{
    int length, breadth;
    public:
    Rectangle(int l, int b) : length(l), breadth(b) {}
    int getArea() {
        return length * breadth; 
    }
};

int main() {
    Shape*sobj;
    Rectangle r(10,7);
    sobj = &r; // Base class pointer pointing to derived class object
    cout << "Area of Rectangle: " << sobj->getArea() << endl; // Calls derived class method
    return 0;
}