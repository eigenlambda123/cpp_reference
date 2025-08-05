#include <iostream>

int main()
{
    std::cout << 5 << '\n'; // using an integer literal directly

    int x { 5 };            // initializing a variable with a literal
    std::cout << x << '\n'; // accessing the value via the variable

    return 0;
}
