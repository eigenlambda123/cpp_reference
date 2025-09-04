#include <iostream>
using namespace std;

int main() {
    double earthMass { 5.9722e24 };   // 5.9722 × 10^24 (kg)
    double electronMass { 9.1093837e-31 }; // 9.1093837 × 10^-31 (kg)
    float smallValue { 1.23e-4f };    // float literal with 'f'
    long double bigValue { 6.02214076e23L }; // Avogadro’s number as long double

    cout << "Earth mass: " << earthMass << '\n';
    cout << "Electron mass: " << electronMass << '\n';
    cout << "Small float: " << smallValue << '\n';
    cout << "Big value (Avogadro): " << bigValue << '\n';
}
