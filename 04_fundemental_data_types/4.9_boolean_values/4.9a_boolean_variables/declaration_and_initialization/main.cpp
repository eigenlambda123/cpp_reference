#include <iostream>
int main() {
    bool b1 { true };    // initialized to true
    bool b2 { false };   // initialized to false
    bool b3 {};          // default initializes to false
    bool b4;             // uninitialized (value undefined)

    std::cout << b1 << " " << b2 << " " << b3 << '\n';
}
