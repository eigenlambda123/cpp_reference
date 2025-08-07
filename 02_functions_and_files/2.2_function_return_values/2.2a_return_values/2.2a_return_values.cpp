#include <iostream>


// Function that returns an int
int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input; // return the user's input
}

int main()
{
    int num{ getValueFromUser() }; // store the return value in a variable
    std::cout << num << " doubled is: " << num * 2 << '\n';
    return 0;
}
