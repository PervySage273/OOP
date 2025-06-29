//static Function//
#include<iostream>
using namespace std;
class Rectangle{
    int length;
    int breadth;
    public:
    Rectangle (int l, int b) 
    { 
        length= l;
        breadth=b;
    }
    static string ShapeType;
    int getlength() {return length;}
    int getbreadth (){return breadth;}

};
string Rectangle::ShapeType = "Rectangle shape";

int main()
{
    Rectangle ob1(10,5), ob2(20,10), ob3(5,9);
    cout<<"length= " << ob1.getlength() << " breadth= " << ob1.getbreadth() << endl;
    cout<<"length= " << ob2.getlength() << " breadth= " << ob2.getbreadth() << endl;
    cout<<"length= " << ob3.getlength() << " breadth= " << ob3.getbreadth() << endl;
    return 0;
}