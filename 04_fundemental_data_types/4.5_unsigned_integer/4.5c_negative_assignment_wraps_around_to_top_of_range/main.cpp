#include <iostream>

int main() {
    unsigned short x = 0;     // min for 16-bit
    std::cout << "x = " << x << '\n';

    x = -1;  // wraps to 65535
    std::cout << "x = " << x << '\n';

    x = -2;  // wraps to 65534
    std::cout << "x = " << x << '\n';

    return 0;
}
