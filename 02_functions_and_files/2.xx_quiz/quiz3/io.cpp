#include <iostream>

int readNumber() {
    int num{};
    std::cout << "Enter a Number: ";
    std::cin >> num;
    return num;
}

void writeAnswer(int nums) {
    std::cout << "The answer is " << nums << '\n';
}
