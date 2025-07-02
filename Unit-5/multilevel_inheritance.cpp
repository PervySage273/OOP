#include<iostream>
using namespace std;
class Animal {
public:
    Animal() {
        cout << "This is a Animal" << endl;
    }
};
class fourlegs : public Animal {
public:
    fourlegs() {
        cout << "This is a fourlegged animal" << endl;
    }
};
class cow : public fourlegs {
public:
    cow() {
        cout << "This is a cow" << endl;
    }
};
int main() {
    cow c;

    // The constructor of Animal will be called first, then fourlegs, and finally cow
    return 0;
}