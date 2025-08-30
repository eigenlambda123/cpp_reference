#include <iostream>

void writeValue(int x) {
    std::cout << "The value of x is: " << x << '\n';
    // no return needed
}

int main() {
    writeValue(1+1);
}
