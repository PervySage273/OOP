// Dynamic memory allocation for array i.e. dynamic array
#include <iostream>
using namespace std;
int main ()
{
    int *arr = NULL;
    int size, i;
    cout << "Enter the size of array: ";
    cin >> size;
    arr = new int[size];
    cout << "Enter array elements:" << endl;
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Array elements are:" << endl;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    delete[] arr;

    return 0;
}
