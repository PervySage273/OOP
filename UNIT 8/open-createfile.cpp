#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("record.txt",ios::out);
    if(!file)
    {
        cout<<"file cannot be opened"<<endl;
    }
    else{
        cout<<"New file created"<<endl;
        file<<"Hello World"<<endl;
        file<<"Thank You"<<endl;
        file.close();
    }

}
