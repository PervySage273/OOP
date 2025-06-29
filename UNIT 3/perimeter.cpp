// ...existing code...
#include <iostream>
using namespace std;
class Point{
    int x;
    int y;
    public:
    Point(){
        cout<<"constructer is called"<<endl;
    }
    Point(int x1,int y1){
        x=x1;
        y=y1;
    }
    int getX() { // Method to return x
        return x;
    }
    int getY() { // Method to return y
        return y;
    }
};
int main()
{
   Point a,b(2,3),c(-7,-8);
   return 0; 
}
// ...existing code...