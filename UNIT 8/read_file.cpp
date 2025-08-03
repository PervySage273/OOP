#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    char ch;
    file.open("record.txt",ios::in);
    if(!file)
    {
        cout<<"file cannot be opened"<<endl;
    }
    else{
       while(!file.eof())
    {
        file>>ch;
        cout<<ch;
    }
        file.close();
    }

}
