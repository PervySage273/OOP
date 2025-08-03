#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30};
    int index;
    cout<<"Enter any index:"<<endl;
    cin>>index;
    try
    {
        if(index<0 || index>2)
        throw 404;
        cout<<"Value at index:"<<index<<"is:"<<arr[index]<<endl;
    }
    catch(int err)
    {
        cout<<"Array index out of bound error"<<endl;
    }
    
    return 0;
}