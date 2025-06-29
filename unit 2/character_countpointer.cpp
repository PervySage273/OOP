#include<iostream>
using namespace std;
int main()
{
    char a[] = {'a', 'b', 'c', 'd'};
    char choice;

    cout << "Enter a character of your choice: ";
    cin >> choice;
    for (char ch : a)
    {
        if (ch == choice)
        {
            cout << "The character '" << choice << "' is present in the array.\n";
            return 0;
        }
    }

    cout << "The character '" << choice << "' is not present in the array.\n";
    return 0;
}
