#include <iostream>

int add(int x, int y) {
    return x + y;
}

int multiply(int z, int w) {
    return z * w;
}

int main() {
    std::cout << add(4, 5) << '\n';             // 9
    std::cout << add(1 + 2, 3 * 4) << '\n';     // 3 + 12 = 15

    int a{5};
    std::cout << add(a, a) << '\n';             // 5 + 5 = 10

    std::cout << add(1, multiply(2, 3)) << '\n'; // 1 + (2*3) = 7
    std::cout << add(1, add(2, 3)) << '\n';      // 1 + (2+3) = 6

    return 0;
}
