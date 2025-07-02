#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
    string name;
    int side1;
    int side2;

public:
    Shape(string n, int l, int b) : name(n), side1(l), side2(b) {}
    string getName() { return name; }
    int getArea() { return side1 * side2; }
};

class Cuboid : public Shape {
    int height;

public:
    Cuboid(int s1, int s2, int h, string n) : Shape(n, s1, s2), height(h) {}
    int getVolume() { return side1 * side2 * height; }
};

int main() {
    Cuboid c(4, 5, 6, "MyCuboid");
    cout << "Shape: " << c.getName() << endl;
    cout << "Area of base: " << c.getArea() << endl;
    cout << "Volume: " << c.getVolume() << endl;
    return 0;
}