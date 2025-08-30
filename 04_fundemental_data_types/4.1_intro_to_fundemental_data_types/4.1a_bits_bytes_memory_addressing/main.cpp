#include <iostream>
using namespace std;

int main() {
    int x = 42;  // store 42 in memory
    char c = 'A'; // store ASCII 'A' in memory

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;  // & gives memory address
    cout << "Value of c: " << c << endl;
    cout << "Address of c: " << (void*)&c << endl;

    return 0;
}
