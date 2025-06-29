//cpp for dynamic_memory allocation
#include<iostream>
using namespace std;
int main()
{
    int *a=new (nothrow) int;
    if(!a)
    {
        cout<<"Memory allocation error"<<endl;
    }
    else
    {
        *a=20;
        cout<<"value of a="<<*a<<endl;

    }
    float *b=new float(20.75);
    cout<<"value of b= "<<*b<<endl;
    return 0;
}
