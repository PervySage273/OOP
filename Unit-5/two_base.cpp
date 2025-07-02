#include<iostream>
using namespace std;

class Base1 {
public:
    void show() {
        cout << "hello" << endl;
    }
};
class Base2 {
public:
    void show() {
        cout << "world" << endl;
    }
};
class Child : public Base1, public Base2 {
};

int main() {
    Child ob;
    ob.Base1::show();
    ob.Base2::show();
    return 0;
}