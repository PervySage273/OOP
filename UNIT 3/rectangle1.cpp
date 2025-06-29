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
    int getlength() {return length;}
    int getbreadth (){return breadth;}
    int getArea(){ return length * breadth;}
    Rectangle compare(Rectangle &obj1,Rectangle &obj2)
    {
        if(obj1.getArea()>obj2.getArea())
        {
            return obj1;
        }
        else
        {
            return obj2;
        }
    }
};

int main()
{
    Rectangle ob1(10,5);
    Rectangle ob2(20,10);
    Rectangle ob3 = ob1.compare(ob1,ob2);
    cout<<ob3.getArea()<<"has largest area"<<endl;
    return  0;
}