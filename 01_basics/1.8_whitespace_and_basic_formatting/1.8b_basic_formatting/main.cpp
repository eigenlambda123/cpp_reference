#include <iostream>

int main()
{
    std::cout << "Welcome to C++ formatting best practices!\n";

    int cost          = 57;
    int pricePerItem  = 24;
    int value         = 5;
    int numberOfItems = 17;

    std::cout << "Total cost is: "
              << (pricePerItem * numberOfItems + cost + value)
              << '\n';

    std::cout << "Good formatting makes code easier to read.\n";

    return 0;
}
