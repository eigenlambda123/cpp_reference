#include <iostream>
using namespace std;

int main() {
    float f { 3.14000f };       // float with 'f' suffix
    double d { 3.14 };       // double (default type)
    long double ld { 3.14L }; // long double with 'L' suffix

    cout << "f: " << f << '\n';
    cout << "d: " << d << '\n';
    cout << "ld: " << ld << '\n';
}
