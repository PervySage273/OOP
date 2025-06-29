//overload unary operator+ for a class
#include <iostream>
using namespace std;
class Unary{
    int x;
    public:

    //unary(int i):x(i){}
    Unary(int i){
        x=i;
    }
    int getX();
    void operator++() {
        ++x; // pre-increment operator
       
    }
    void operator++(int) { // post-increment operator
   
        x++;
    }
};
int Unary::getX() {
    return x;
}

int main()
{
    Unary ob1(10);
   cout << "Value: " << ob1.getX() << endl;
   ++ob1;//pre-increment operator
    cout << "Value after pre-increment: " << ob1.getX() << endl;
   ob1++;//post-increment operator
    cout << "Value after post-increment: " << ob1.getX() << endl;
    return 0;
}