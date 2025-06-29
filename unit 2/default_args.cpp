//cpp to understand concept of default argument,
#include<iostream>
using namespace std;
int add_num(int x=0, int y=0)
{
    return (x+y);
}
int main()
{
    int x,y,res;
    cout<<"enter the two numbers:";
    cin>>x>>y;
    res=add_num(x,y);
    cout<<"the sum of "<<x<<"and" <<y<<" is :"<<res<<endl;
    return 0;
}
