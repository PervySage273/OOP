#include<iostream>
using namespace std;
int x;
int& test()
{
    return x;
}
int main()
{
    test()=100;
    cout<<"x="<<x<<endl;
    return 0;
}
