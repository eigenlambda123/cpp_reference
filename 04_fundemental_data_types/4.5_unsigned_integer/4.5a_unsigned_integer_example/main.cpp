#include <iostream>

int main() {
    // Declare unsigned integers
    unsigned char a = 200;        // 8-bit
    unsigned int b = 50000;       // 32-bit
    unsigned long c = 4000000000; // 32 or 64-bit depending on system
    unsigned long d = -4000000000; // 32 or 64-bit depending on system

    std::cout << "Unsigned char a: " << (int)a << '\n';
    std::cout << "Unsigned int b: " << b << '\n';
    std::cout << "Unsigned long c: " << c << '\n';
    std::cout << "Unsigned long d: " << d << '\n';


    // Example of wrap-around
    unsigned char x = 255;
    x += 1;  // wraps around to 0
    std::cout << "After adding 1 to 255, x = " << (int)x << '\n';

    return 0;
}
