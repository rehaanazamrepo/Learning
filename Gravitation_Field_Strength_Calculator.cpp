// Aim: To pracitice conctructors
#include <iostream>
using namespace std;
class GravitationFieldStrengthCalculator {
private:
    const double G = 6.67430e-11; // Gravitational constant in m^3 kg^-1 s^-2
    double mass; // Mass of the object in kg
    double radius; // Radius from the center of the object in meters
public:
    // Constructor to initialize mass and radius
    GravitationFieldStrengthCalculator(double m, double r) : mass(m), radius(r) {}

    // Method to calculate gravitational field strength
    double calculateFieldStrength() {
        if (radius == 0) {
            throw invalid_argument("Radius cannot be zero.");
        }
        return G * mass / (radius * radius);
    }
    GravitationFieldStrengthCalculator(){
       double mass = 5.972e24; // Default mass (Earth's mass in kg)
       double radius = 6.371e6; // Default radius (Earth's radius in meters)
    }
};
int main(){
    double mass, radius;
    cout << "Enter mass of the object (in kg): ";
    cin >> mass;
    cout << "Enter radius from the center of the object (in meters): ";
    cin >> radius;

    try{
        GravitationFieldStrengthCalculator calculator(mass, radius);
        double fieldStrength = calculator.calculateFieldStrength();
        cout << "Gravitational Field Strength: " << fieldStrength << " N/kg" << endl;
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}