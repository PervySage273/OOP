#include<iostream>
#include<string>
using namespace std;
template<class T>
class ArrayDemo{
    T *arr;
    public:
    ArrayDemo()
    {
        arr=new T [5];
    }
    void fillArray(int index, T item)
    {
        arr[index]=item;
    }
    void display()
    {
        cout<<"Array elements are:"<<endl;
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    ArrayDemo<string>ob;
    string item;
    cout<<"Enter five names:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>> item;
        ob.fillArray(i,item);
    }
    ob.display();
    return 0;
}