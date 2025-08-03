#include<iostream>
using namespace std;
class A{
    int x;
    public:
    A()
    {
        x = 10;
    }
    friend void showA(A obj);
};
void showA(A obj)
{
    cout<<"x="<<obj.x<<endl; // Accessing private member x of class A
}
int main() {
    A a;
    showA(a); // Calling friend function to access private member
    return 0;
}