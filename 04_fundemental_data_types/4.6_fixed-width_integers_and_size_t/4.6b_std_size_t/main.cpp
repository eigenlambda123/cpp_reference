#include <iostream>

int main() {
    int x{5};
    std::size_t s = sizeof(x); // sizeof returns std::size_t
    std::cout << s << '\n';    // prints 4 on a 32-bit int system
    return 0;
}
