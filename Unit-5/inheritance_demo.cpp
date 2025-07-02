#include<iostream>
using namespace std;
class Parent{
   public:
   int x;
   int y;

};

class child: public Parent{
    public:
        float k;
};
int main(){
    child ob;
    ob.x=10;
    ob.y=20;
    
    ob.k=20.45;
    cout<<"x: "<<ob.x<<endl;
    cout<<"y: "<<ob.y<<endl;    
    cout<<"k: "<<ob.k<<endl;
    return 0;
}