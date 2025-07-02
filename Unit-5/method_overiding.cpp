#include<iostream>
using namespace std;
class A{
    public:
    void display(){
        cout<<"Method of class A"<<endl;
    }
};
class B: public A{
    public:
    void display(){
        cout<<"overridden display Method of class B"<<endl;
    }
};
int main(){
    B ob;
    ob.display();
    ob.A::display(); // Calling the base class method explicitly
    // ob.display(); // This would call the overridden method in class B
    return 0;
}