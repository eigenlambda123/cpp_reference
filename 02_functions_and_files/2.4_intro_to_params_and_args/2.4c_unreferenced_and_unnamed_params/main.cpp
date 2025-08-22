#include <iostream>

// Function with an unreferenced parameter (parameter is named but unused)
void printMessage(int count) // 'count' is unreferenced here
{
    std::cout << "Hello! This function ignores its parameter.\n";
}

// Function with an unnamed parameter (parameter has no name)
void doNothing(int) // unnamed parameter
{
    std::cout << "This function takes an int, but doesn't use it.\n";
}

int main()
{
    printMessage(5);   // Passes 5, but 'count' is ignored
    doNothing(10);     // Passes 10, but it's unnamed and unused

    return 0;
}
