#include <iostream>

// This acts as a flag
#define DEBUG

int main() {
#ifdef DEBUG
    std::cout << "Debug mode enabled\n";
#endif

    std::cout << "Program running...\n";
    return 0;
}
