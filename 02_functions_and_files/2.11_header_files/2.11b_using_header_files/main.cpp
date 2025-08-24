#include <iostream>
#include "add.h"

int main() {
    int result = add(3, 4);
    std::cout << "Result: " << result << std::endl;

    std::cout << "Press Enter to exit...";
    std::cin.get(); // waits for user input
    return 0;
}
