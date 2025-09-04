#include <iomanip>
#include <iostream>

int main() {
    std::cout << std::setprecision(17); // show 17 digits of precision
    std::cout << 3.333333333333333333333f << '\n';  // float
    std::cout << 3.333333333333333333333  << '\n';  // double
}
