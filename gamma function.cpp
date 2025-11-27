#include <iostream>
using namespace std;
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
int main() {
    int value;
    cout<<"Enter the value: ";
    cin >> value;
    
    int gamma = factorial(value - 1); // Placeholder for actual gamma function computation
    cout<< "Gamma(" << value << ") = " << gamma << endl;
    return 0;
}