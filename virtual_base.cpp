// C++ program for vitual base class
#include <iostream>
using namespace std;
class A{
    public:
    int x;
    A()
    {
        x = 10;
    }
};
class B: public virtual A{
};
class C: public virtual A{
};
class D:public B, public C{
};
int main() {
    D obj;
   cout<<"x="<<obj.x<<endl; // This will cause ambiguity because x is inherited from both B and C
    return 0;
}