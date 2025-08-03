// A function can be friend to more than 1 class
#include <iostream>
using namespace std;
class B; // Forward declaration of class B
class A{
    int x;
    public:
    A() { x=10; }
    friend void show(A a, B b); // Friend function declaration
};
class B{
    int y;
    public:
    B() { y=20; }
    friend void show(A a, B b); // Friend function declaration
};
void show(A a, B b) { // Friend function definition
    cout << " x= "<< a.x << ", y= " << b.y << endl;
}
int main(){
    A ob1;
    B ob2;
    show(ob1, ob2); // Calling the friend function
    return 0;
}