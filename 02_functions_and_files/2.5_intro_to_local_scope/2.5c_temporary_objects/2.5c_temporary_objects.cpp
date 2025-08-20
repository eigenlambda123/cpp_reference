#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input; // return value -> temporary object in caller
}

int main()
{
    std::cout << getValueFromUser() * getValueFromUser()<< '\n';
    // return value stored in a temporary, used by std::cout,
    // then destroyed at end of this statement

    return 0;
}
