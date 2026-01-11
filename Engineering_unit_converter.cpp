#include <iostream>
using namespace std;
class Imperial_to_SI{
    public :
    double feet_to_meters(double feet){
        return feet * 0.3048;
    }
    double inches_to_centimeters(double inches){
        return inches * 2.54;
    }
    double pounds_to_kilograms(double pounds){
        return pounds * 0.453592;
    }
    double Ton_to_kilograms(double tons){
        return tons * 907.18474;
    }
    double pound_per_square_inch_to_pascal(double psi){
        return psi * 6894.76;
    }
    double pound_per_cubic_foot_to_kg_per_cubic_meter(double pcf){
        return pcf * 16.0185;
    }
    double pound_per_square_foot_to_pascals(double psf){
        return psf * 47.8803;
    }


};
class SI_to_Imperial{
    public :
    double meters_to_feet(double meters){
        return meters / 0.3048;
    }
    double centimeters_to_inches(double centimeters){
        return centimeters / 2.54;
    }
    double kilograms_to_pounds(double kilograms){
        return kilograms / 0.453592;
    }
    double kilograms_to_Ton(double kilograms){
        return kilograms / 907.18474;
    }
    double pascal_to_pound_per_square_inch(double pascal){
        return pascal / 6894.76;
    }
    double kg_per_cubic_meter_to_pound_per_cubic_foot(double kg_per_cubic_meter){
        return kg_per_cubic_meter / 16.0185;
    }
    double pascals_to_pound_per_square_foot(double pascals){
        return pascals / 47.8803;
    }

};
int main(){
    Imperial_to_SI its;
    SI_to_Imperial sti;
    cout<<"Enter conversion type (its/sti): "<<endl;
    string conversion_type;
    cout<<"Imperial to SI conversions: its"<<endl;
    cout<<"SI to Imperial conversions: sti"<<endl;
    cin>>conversion_type;
    if(conversion_type == "its"){
        cout<<"Enter your conversion choice: "<<endl;
        cout<<"1. Feet to Meters"<<endl;
        cout<<"2. Inches to Centimeters"<<endl;
        cout<<"3. Pounds to Kilograms"<<endl;
        cout<<"4. Ton to Kilograms"<<endl;
        cout<<"5. Pound per Square Inch to Pascal"<<endl;
        cout<<"6. Pound per Cubic Foot to Kg per Cubic Meter"<<endl;
        int choice;
        cin>>choice;
        double value;
        cout<<"Enter value to convert: ";
        cin>>value;
        switch(choice){
            case 1:
                cout<<its.feet_to_meters(value)<<" m"<<endl;
                break;
            case 2:
                cout<<its.inches_to_centimeters(value)<<" cm"<<endl;
                break;
            case 3:
                cout<<its.pounds_to_kilograms(value)<<" kg"<<endl;
                break;
            case 4:
                cout<<its.Ton_to_kilograms(value)<<" kg"<<endl;
                break;
            case 5:
                cout<<its.pound_per_square_inch_to_pascal(value)<<" Pa"<<endl;
                break;
            case 6:
                cout<<its.pound_per_cubic_foot_to_kg_per_cubic_meter(value)<<" kg/m³"<<endl;
                break;
            case 7:
                cout<<its.pound_per_square_foot_to_pascals(value)<<" Pa"<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
        }
    else if(conversion_type == "sti"){
        cout<<"Enter your conversion choice: "<<endl;
        cout<<"1. Meters to Feet"<<endl;
        cout<<"2. Centimeters to Inches"<<endl;
        cout<<"3. Kilograms to Pounds"<<endl;
        cout<<"4. Kilograms to Ton"<<endl;
        cout<<"5. Pascal to Pound per Square Inch"<<endl;
        cout<<"6. Kg per Cubic Meter to Pound per Cubic Foot"<<endl;
        int choice;
        cin>>choice;
        double value;
        cout<<"Enter value to convert: ";
        cin>>value;
        switch(choice){
            case 1:
                cout<<sti.meters_to_feet(value)<<"  ft"<<endl;
                break;
            case 2:
                cout<<sti.centimeters_to_inches(value)<<" in"<<endl;
                break;
            case 3:
                cout<<sti.kilograms_to_pounds(value)<<" lb"<<endl;
                break;
            case 4:
                cout<<sti.kilograms_to_Ton(value)<<" Ton"<<endl;
                break;
            case 5:
                cout<<sti.pascal_to_pound_per_square_inch(value)<<" psi"<<endl;
                break;
            case 6:
                cout<<sti.kg_per_cubic_meter_to_pound_per_cubic_foot(value)<<" pcf"<<endl;
                break;
            case 7:
                cout<<sti.pascals_to_pound_per_square_foot(value)<<" psf"<<endl;
                break;
            default:
                cout<<"Invalid choice"<<endl;
        }
}
    else{
        cout<<"Invalid conversion type"<<endl;
    }
    return 0;
}