// Stress Calculator
#include <iostream>
using namespace std;
class StressCalculator{
    public:
    double calculateStress(double force, double area){
        return force / area;
    }
};
 int main(){
    StressCalculator sc;
    double force, area;
    cout << "Enter Force (in Newtons): ";
    cin >> force;
    cout << "Enter Area (in square meters):";
    cin >> area;
    if(area == 0.0){
        cout << "Error: Area cannot be zero." << endl;
    } else {
        double stress = sc.calculateStress(force, area);
        cout << "Calculated Stress = " << stress << " Pascals" << endl;
    }
 }
