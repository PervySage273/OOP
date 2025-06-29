#include<iostream>
using namespace std;
void sum(int a=2,int b=3,int c=4)
{
    cout<<"a="<<a<<"b="<<b<<"c="<<c<<endl;

}
int main()
{
    sum();
    sum (10,20,30);
    sum(60,80);
    sum(-10);
    return 0;
}
