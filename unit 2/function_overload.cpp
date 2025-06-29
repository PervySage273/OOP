#include<iostream>
using namespace std;

int sum(int a)
{
    return (a + 1);
}

float sum(float a, float b, float c)
{
    return (a + b + c);
}

int sum(int a, int b)
{
    return a + b;
}

float sum(float a, float b)
{
    return a + b;
}

int main()
{
    cout << "sum=: " << sum(20,30) << endl;
    cout << "sum=: " << sum(20) << endl;
    cout << "sum=: " << sum(2.5,3.5,4.6) << endl;
    cout << "sum=: " << sum(20,30) << endl;

    return 0;
}
