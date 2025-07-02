#include<iostream>
using namespace std;

class shape {
protected:
    int length;
    int breadth;
public:
    shape(int l, int b) : length(l), breadth(b) {
        cout << "Shape constructor called with length: " << length << " and breadth: " << breadth << endl;
    }
    virtual void display() {
        cout << "Shape with length: " << length << " and breadth: " << breadth << endl;
    }
    virtual ~shape() {
        cout << "Shape destructor called" << endl;
    }
};

class rectangle : public shape {
public:
    rectangle(int l, int b) : shape(l, b) {
        cout << "Rectangle constructor called" << endl;
    }
    void display() override {
        cout << "Rectangle with length: " << length << " and breadth: " << breadth << endl;
    }
    ~rectangle() {
        cout << "Rectangle destructor called" << endl;
    }
};

class square : public shape {
public:
    square(int l, int b) : shape(l, b) {
        cout << "Square constructor called" << endl;
    }
    void display() override {
        cout << "Square with side: " << length << endl;
    }
    ~square() {
        cout << "Square destructor called" << endl;
    }
};

int main() {
    shape* s1 = new rectangle(10, 5);
    shape* s2 = new square(7, 7);

    s1->display();
    s2->display();

    delete s1; // Properly calls rectangle and shape destructors
    delete s2; // Properly calls square and shape destructors

    return 0;
}