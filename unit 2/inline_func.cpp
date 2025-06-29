//cpp program to understtand concept of inline function
#include<iostream>
using namespace std;
int max(int a, int b)
{
    return a>b?a:b;

}
int main()
{
    cout<<"largest among -1 and 0 id:"<<max(-1,0)<<endl;
    return 0;
}
