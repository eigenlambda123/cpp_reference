#include <iostream>

#define SQUARE(x) ((x) * (x))  // expands inline

int main() {
    std::cout << "Square of 5: " << SQUARE(5) << '\n';
    std::cout << "Square of 1+2: " << SQUARE(1+2) << '\n'; // careful with expansion
    return 0;
}
