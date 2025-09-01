#include <cstdint>
#include <iostream>

int main() {
    std::int32_t x { 32767 }; // always 32-bit signed integer
    x = x + 1;                // 32768 safely fits
    std::cout << x << '\n';
    return 0;
}
