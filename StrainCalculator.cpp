// Strain Calculator.cpp
#include <iostream>
using namespace std;
double calculateStrain(double originalLength, double newLength){
    if (originalLength == 0)
        return 0;
    double strain = (newLength - originalLength) / originalLength;
    return strain;
}
double mod(double strain){
    return strain < 0 ? -strain : strain;
}
int main(){
    double originalLength, newLength;
    cout << "Enter the original length in meters: ";
    cin >> originalLength;
    cout << "Enter the new length in meters: ";
    cin >> newLength;
    double strain = calculateStrain(originalLength, newLength);
    cout << "The calculated strain is: " << mod(strain) << endl;
    return 0;}