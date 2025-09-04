#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(2); // force fixed-point with 2 decimals

    cout << 5.0 << '\n';        // prints 5.00
    cout << 6.7f << '\n';       // prints 6.70
    cout << 9876543.21 << '\n'; // prints 9876543.21

    cout << scientific;         // switch to scientific notation
    cout << 9876543.21 << '\n'; // prints 9.876543e+06
}
