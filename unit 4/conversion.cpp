#include<iostream>
using namespace std;
int main() {
    int a = 2, b= 5,c;
    float result,result2,result3;
    c = a /b ; // Integer division
    result  = (float)a / b; // explicit type conversion 
    result2 = (float)a / b; // implicit type conversion
    result3 = static_cast<float>(a) / b; // using static_cast for explicit conversion
    // Note: result2 is actually the same as result in this case, both are float
    cout<< "c="<< c << endl; // Output will be 0 due to integer division
    cout<< "result="<< result << endl; // Output will be 0.4 due to float division
    cout<< "result2="<< result2 << endl; // Output will be 0.4 due to float division
    cout<< "result3="<< result3 << endl; // Output will be 0.4 due to static_cast
    return 0;
}
