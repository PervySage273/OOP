#include<iostream>
using namespace std;
    class A{
public:
   A()
    {
        cout<<"contructor of A is called"<<endl;
    }
    virtual ~A()
    {
        cout<<"destructor of A is called"<<endl;
    }
};
    class B:public A{
public:
 B()
    {
        cout<<"constructor of B is called"<<endl;
    }
     ~B()
    {
        cout<<"destructor of B is called"<<endl;
    }
};
int main()
{
    A *obj;
    B child;
    obj=&child;
    delete obj;
    return 0;
}


