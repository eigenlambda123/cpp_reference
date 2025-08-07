#include <iostream>
#include <cmath>  // For sqrt

int getFive() {
    return 5;  // function call expression returns an int
}
int main() {
    int x = 2 + 3;              // arithmetic expression (2 + 3)
    int y = x * 4;              // expression using variable and operator
    int z = getFive();          // function call expression
    double r = std::sqrt(16.0); // function call expression (returns 4.0)

    std::cout << "x = " << x << '\n'; // expression involving operator <<
    std::cout << "y = " << y << '\n';
    std::cout << "z = " << z << '\n';
    std::cout << "r = " << r << '\n';

    return 0;
}
