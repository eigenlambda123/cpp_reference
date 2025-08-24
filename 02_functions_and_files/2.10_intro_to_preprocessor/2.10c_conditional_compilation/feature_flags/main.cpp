#include <iostream>

#define ENABLE_GREETING

int main() {
// removing macro name will make this not compile
#ifdef ENABLE_GREETING
    std::cout << "Hello, User!\n";
#endif
    std::cout << "Program finished.\n";

}
