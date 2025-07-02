//more than one child class can be derived from a single parent class
#include <iostream>
using namespace std;
class Animal {
    public:
    Animal() {
        cout << "Animal can run" << endl;
    }
};
class Dog : public Animal {
};
class Cat : public Animal {
};
int main() {
    Dog dog;
    Cat cat;
    // The constructor of Animal will be called for both Dog and Cat
    return 0;
}
