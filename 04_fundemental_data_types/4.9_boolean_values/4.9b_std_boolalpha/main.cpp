#include <iostream>
int main() {
    std::cout << true << " " << false << '\n';

    std::cout << std::boolalpha;
    std::cout << true << " " << false << '\n'; // true false

    std::cout << std::noboolalpha;
    std::cout << true << " " << false << '\n'; // 1 0
}
