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
    Rectangle(const Rectangle &obj)//copy constructor
    {
        length =obj.length;
        breadth =obj.breadth;
    }
    int getlength() {return length;}
    int getbreadth (){return breadth;}
    int getArea(){ return length * breadth;}
};
int main()
{
    Rectangle ob1(10,5);
    cout<<"Dimensions:"<<ob1.getlength()<<"X"<<ob1.getbreadth()<<endl;
    Rectangle ob2=ob1;
     cout<<"Dimensions:"<<ob2.getlength()<<"X"<<ob2.getbreadth()<<endl;
     if(ob1.getArea()==ob2.getArea())
     {
        cout<<"They are similar"<<endl;
     }
    return  0;
}