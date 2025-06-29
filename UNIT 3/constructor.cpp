//default constructor
#include<iostream>
using namespace std;
class Point{
    int x;
    int y;
    public:
    Point(){
        cout<<"constructor is called"<<endl;
    }
    Point(int x1,int y1):x(x1),y(y1){
    cout<<"paramaterized constructor get called"<<endl;
    }
//     {
//         x=x1;
//         y=y1;
//     }
};
int main()
{
    Point a,b(2,3),c(-7,8);
    return 0;
}
