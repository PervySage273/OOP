#include<iostream>
using namespace std;

class Parent {
    protected:
        int x;
        int getX() {
            return x;
        }
    };
    class Child : public Parent {
        public:
            void setX(int value) {
                x = value; // Accessing protected member from Parent
            }
            void display() {
                cout << "Value of x: " << getX() << endl; // Accessing protected method from Parent
            }
    };
    int main() {
        Child obj;
        obj.setX(10); // Setting value of x
        obj.display(); // Displaying value of x
        return 0;
    }

