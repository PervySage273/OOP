#include<iostream>
using namespace std;

int main()
{
    int a[]={1,2,3};
    int *p;
    p = a;

    cout << "The array elements are: ";
    for(int i = 0; i < 3; i++)
    {
        cout << *(p + i) << "";
    }


    return 0;
}
