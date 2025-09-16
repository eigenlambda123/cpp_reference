#include <iostream>
int main() {
    std::cout << std::boolalpha;

    bool b1 = 4;   // implicit conversion → true
    bool b2 = 0;   // implicit conversion → false

    std::cout << b1 << '\n'; // true
    std::cout << b2 << '\n'; // false
}
