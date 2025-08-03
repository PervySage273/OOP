#include<iostream>
using namespace std;

template <class T> T sum(T a , T b)
{
    T res;
    res = a+b;
    return res;
}
template <class A, class B> B sum(A a, B b)

{
    B res;
    res = a+b;
    return res;
}
template <class T> T sum(T a , T b, T c)
{
    T res;
    res = a+b+c;
    return res;
}

int main()
{
    cout<<"Total ="<< sum (2,3)<<endl;
    cout<<"Total = "<< sum (2.45,3.50)<<endl;
      cout<<"Total = "<< sum (2,3,4)<<endl;

    return 0;
}
