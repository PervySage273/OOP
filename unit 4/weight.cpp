#include<iostream>
using namespace std;
class weight {
    int kg;
    public:
    weight(int kilo ) {
        kg = kilo; // Constructor to initialize weight in kilograms
    }
    operator float(){
        float gram = kg * 1000.0; // Convert kilograms to grams
        return gram; // Return the weight in grams
    }  
};
int main() {
    weight ob(125); // Create an object of weight with 125 kg
    float gram = ob;
    cout<<"125 kg in grams is: " << gram << " grams" << endl; // Display the weight in grams
    return 0;
}
