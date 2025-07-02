#include<iostream>
using namespace std;
class Animal {
public:
Animal() {
    cout << "Animal can run" << endl;
}
};
class Bird {
public:
Bird() {
    cout << "Bird can fly" << endl;
}
};
class Parrot : public Animal, public Bird {
public:
Parrot() {
    cout << "Parrot can talk" << endl;
}
};
int main() {
    Parrot p;
    return 0;
}