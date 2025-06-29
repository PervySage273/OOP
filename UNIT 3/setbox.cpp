#include <iostream>
using namespace std;
class Box {
    int length;
    int breadth;
    int height;
public:
    int getVolume()
    {
        return length * breadth * height;
    }
    int getArea()
    {
        return  (length * breadth );
    }
    void setLength(int l)
    {
        length = l;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }
    void setHeight(int h)
     {
        height = h;
    }

};
int main() {
    Box ob;
    ob.setLength(10);
    ob.setBreadth(5);
    ob.setHeight(10);

    cout << "Volume: " << ob.getVolume() << endl;
    cout << " Area: " << ob.getArea() << endl;

    return 0;
}
