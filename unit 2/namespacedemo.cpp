#include<iostream>
namespace A {
    int x = 10;
    void display()
    {
        std::cout<<"Hello World"<<std::endl;
    }
}
namespace B {
    int x = 20;
    void display()
    {
        std::cout<<"thank you "<<std::endl;
    }
}
int main()
{
    std::cout << "value of x in A = " << A::x << std::endl;
    std::cout << "value of x in B = " << B::x << std::endl;
    A::display();
    B::display();

    return 0;
}

