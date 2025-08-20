#include <iostream>

void greet()
{
    std::cout << "Hello!\n";
}

int add(int x, int y) // x and y are local variables (parameters)
{
    int z{ x + y };   // z is a local variable
    return z;         // z is destroyed when function ends
}

int main()
{
    int a{ 10 };      // a’s lifetime begins here
    std::cout << add(a, 5) << '\n';

    greet();          // a is still alive during this call

    return 0;         // a is destroyed here
}
