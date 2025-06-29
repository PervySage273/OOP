#include<iostream>
using namespace std;
class rectangle {
private:
    int length;
    int breadth;
public:
    void setLength(int l) {
        length = l;
    }

    void setBreadth(int b) {
        breadth = b;
    }

    int getArea() {
        return length * breadth;
    }
};
int main() {
    rectangle ob;
    ob.setLength(10);
    ob.setBreadth(5);
    cout << "Area: " << ob.getArea() << endl;
    return 0;
}
