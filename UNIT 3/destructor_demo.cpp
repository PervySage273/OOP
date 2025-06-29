#include<iostream>
using namespace std;
class Test{
    int *arr;
    public:
    Test(){
        arr=new int[10];
        cout<<"default constructor is called"<<endl;
    }
    void say(){
        cout<<"Hello World"<<endl;
    }
    ~Test(){
        delete[] arr;
        cout<<"object is deleted now "<<endl;
    }
};
int main()
{
    Test ob1,ob2;
    ob1.say();
    ob2.say();
    return 0;
}