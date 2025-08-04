#include <iostream>

int main()
{
    std::cout << "Enter two number separated by spaces: ";

    int x{};
    int y{};
    std::cin >> x >> y;

    std::cout << "You entered " << x << " and " << y << '\n';
    return 0;
}
