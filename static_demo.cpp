//static variable demo
#include <iostream>
using namespace std;
class test
{
    public:
    static int count; // Static variable declaration
    test () { count++; } // Constructor increments count
    static int getCount(){
        return count; // Static function to access static variable
    }
};
int test::count = 0; // Static variable definition
int main()
{ 
    test ob1,ob2,ob3; // Creating objects of class test
    cout << "Number of objects created: " << test::count << endl; // Accessing static variable
    return 0;
}