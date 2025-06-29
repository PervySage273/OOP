#include<iostream>
using namespace std;
// Function to overload the + operator for binary addition
class Binary {
    int x;
    public:
    Binary (int i)
    {
        x = i;
    }
    int operator + (Binary ob)
    {
        return x + ob.x;
    }
};
int main()
{
    Binary a(10), b(20);
    a+b; // This line is not doing anything with the result
    cout << "The sum of a and b is: " << a + b << endl; // Display the result of the addition
    return 0;
}