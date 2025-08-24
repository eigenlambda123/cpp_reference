#include <iostream>

int main() {
#ifdef _WIN32
    std::cout << "Running on Windows\n";
#elif __linux__
    std::cout << "Running on Linux\n";
#else
    std::cout << "Unknown platform\n";
#endif
}
