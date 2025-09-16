#include <iostream>
int main() {
    bool b1 { !true };   // false
    bool b2 { !false };  // true

    std::cout << b1 << " " << b2 << '\n';
}
