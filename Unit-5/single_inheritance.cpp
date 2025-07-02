#include<iostream>
using namespace std;
class A{
    public:
    void display(){
        cout<<"hello world"<<endl;
    }
};
class B: public A{
    public:
    void show(){
        cout<<"hello c++"<<endl;
    }
};
int main(){
    B obj;
    obj.display(); // Calling method from base class A
    obj.show();    // Calling method from derived class B
    return 0;
}