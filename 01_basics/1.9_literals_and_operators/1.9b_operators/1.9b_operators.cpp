#include <iostream>

int main() {
    int x{}, y{};

    std::cout << "Enter two integers: ";     // insertion operator (operator<<)
    std::cin >> x >> y;                      // extraction operator (operator>>)

    int sum = x + y;                         // binary operator (+), assignment (=)
    int neg = -sum;                          // unary operator (-)

    std::cout << "Sum: " << sum << '\n';     // binary operator <<
    std::cout << "Negated sum: " << neg << '\n';

    return 0;
}
