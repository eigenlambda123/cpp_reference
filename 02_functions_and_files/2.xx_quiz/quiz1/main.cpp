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

int main () {
    int num_one { readNumber() };
    int num_two { readNumber() };
    writeAnswer(num_one + num_two);
    return 0;
}
