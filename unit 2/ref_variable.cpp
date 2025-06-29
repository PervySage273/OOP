//cpp to understand reference variable
#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &b=a;
    cout<<"a="<<a<<"b="<<b<<endl;
    a=-5;
    cout<<"a="<<a<<"b="<<b<<endl;
    b=20;
    cout<<"a="<<a<<"b="<<b<<endl;
    return 0;

}
