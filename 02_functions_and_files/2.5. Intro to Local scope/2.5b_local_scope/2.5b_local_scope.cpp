#include <iostream>

int add(int x, int y) // x and y enter scope here
{
    return x + y;     // x and y usable only inside add()
} // x and y go out of scope (destroyed)

int main()
{
    int a{ 5 }; // a enters scope here
    int b{ 6 }; // b enters scope here

    std::cout << add(a, b) << '\n'; // calls add(5, 6)

    return 0;
} // b and a go out of scope (destroyed)
