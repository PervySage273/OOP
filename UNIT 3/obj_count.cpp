#include<iostream>
using namespace std;
class square{
    int side;
    public:
    static int objcount;
    square(){
        side=5;
        objcount++;
        cout<<"Constructor is called "<<endl;
    }
    static int getobjectcount(){
        return objcount;
    }
};
int square::objcount = 0; 
int main()
{
    square ob1, ob2, ob3 ,ob4;
    cout<<"Total number of objects created: " << square::getobjectcount() << endl;
    return 0;
}