#include<iostream>
using namespace std;

class A {
    public:
   virtual void display() {
        cout << "Display Method of class A" << endl;
    }
};

class B : public A {
    public:
    void display() {
        cout << "Display Method of class B" << endl;
    }
};
int main(){
    A*obj;
    B child;
    obj = &child; // Pointing to an object of class B
    obj->display(); // Calls the display method of class B

    return 0;
}
//yo question auxa
// explain the concept of virtual functions and dynamic polymorphism using example
//yo code le virtual function ra dynamic polymorphism ko concept lai demonstrate garcha
//virtual function le runtime ma method ko binding garne kaam garcha
//dynamic polymorphism le derived class ko method lai base class pointer bata call garna sakcha