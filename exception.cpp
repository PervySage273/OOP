#include<iostream>
using namespace std;
int main()
{
    int a,b,res;
    cout<<"enter two numbers:"<<endl;
    cin>>a>>b;
    try{
        if(b==0)
        throw 505;
        res = a/b;
        cout<<res<<endl;
    }catch(int error)
    {
        cout<<"you cannot divide any number by zero"<<endl;

    }
    return 0;
}
//error haru lai handle garxa
// to solve the error used :-try thro and catch