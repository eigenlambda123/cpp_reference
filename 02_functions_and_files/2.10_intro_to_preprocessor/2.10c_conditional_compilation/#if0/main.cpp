#include <iostream>

int main() {
    std::cout << "This will compile\n";

#if 0
    std::cout << "This won’t compile\n";
    std::cout << "Nor will this\n";
#elif 1
    std::cout << "This will compile v2\n";
#endif

    return 0;
}
