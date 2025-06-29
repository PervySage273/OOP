#include<iostream>
using namespace std;

void display(int a)
{
    cout << "a (int) = " << a << endl;
}
void display(double a)
{
    cout << "a (double) = " << a << endl;
}

int main()
{
    display(10);    // Calls display(int)
    display(20.5);  // Calls display(double)
    return 0;
}
