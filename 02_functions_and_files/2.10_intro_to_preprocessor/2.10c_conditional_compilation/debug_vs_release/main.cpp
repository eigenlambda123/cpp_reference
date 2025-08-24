#include <iostream>

// Uncomment for debugging
// #define DEBUG_MODE

int main() {
#ifdef DEBUG_MODE
    std::cout << "Debug info: starting main()\n";
#endif

    std::cout << "Program running...\n";
}
