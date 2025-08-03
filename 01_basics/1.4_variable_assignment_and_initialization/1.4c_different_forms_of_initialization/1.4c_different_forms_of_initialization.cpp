#include <iostream>

int main() {
    // Default-initialization (value is undefined/garbage)
    int a;
    std::cout << "Default-initialized a (uninitialized): " << a << '\n';

    // Copy-initialization
    int b = 5;
    std::cout << "Copy-initialized b: " << b << '\n';

    // Direct-initialization
    int c(10);
    std::cout << "Direct-initialized c: " << c << '\n';

    // Direct-list-initialization (preferred)
    int d{15};
    std::cout << "Direct-list-initialized d: " << d << '\n';

    // Value-initialization (zero-initialized)
    int e{};
    std::cout << "Value-initialized e (zero): " << e << '\n';

    // Attempting narrowing conversion (this will cause compile error if uncommented)
    // int f{4.9}; // Error: narrowing conversion from double to int

    return 0;
}
