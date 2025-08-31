#include <iostream>

int main() {
    unsigned char a = 255;   // max for 8-bit
    std::cout << "a = " << (int)a << '\n';

    a = 256;  // wraps around: 256 % 256 = 0
    std::cout << "a = " << (int)a << '\n';

    a = 280;  // wraps around: 280 % 256 = 24
    std::cout << "a = " << (int)a << '\n';

    return 0;
}
