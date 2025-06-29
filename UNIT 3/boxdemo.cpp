#include<iostream>
using namespace std;

class Box {
public:
    int length;
    int breadth;
    int height;

    int getArea() {
        return length * breadth;
    }

    int getVolume() {
        return length * breadth * height;
    }
};

int main() {
    Box ob;
    ob.length = 10;
    ob.breadth = 5;
    ob.height = 8;

    cout << "Length is " << ob.length << endl;
    cout << "Breadth is " << ob.breadth << endl;
    cout << "Height is " << ob.height << endl;
    cout << "Volume is " << ob.getVolume() << endl;
    cout << "Area is   " << ob.getArea() << endl;

    return 0;
}
