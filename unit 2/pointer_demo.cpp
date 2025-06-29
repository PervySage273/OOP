#include<iostream>
using namespace std;
int main()
{
    int x = 10,*p;
    cout<<"value of x="<<x<<endl;
    cout<<"address of x="<<&x<<endl;
    p=&x;
     cout<<"value of x="<<*(&x)<<endl;
    cout<<"value of x="<<*p<<endl;
     cout<<"address of x="<<p<<endl;

    return 0;
}
