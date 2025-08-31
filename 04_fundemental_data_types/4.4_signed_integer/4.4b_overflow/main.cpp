#include <iostream>
#include <limits>

int main() {
    // Get the maximum value for a 32-bit signed int
    int maxVal = std::numeric_limits<int>::max();

    std::cout << "Max int: " << maxVal << '\n';

    // Trigger overflow (undefined behavior!)
    int overflowed = maxVal + 1;

    std::cout << "After overflow: " << overflowed << '\n';

    return 0;
}
