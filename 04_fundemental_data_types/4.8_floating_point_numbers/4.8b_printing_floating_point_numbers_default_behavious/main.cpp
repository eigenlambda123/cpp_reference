#include <iostream>

int main()
{
	std::cout << 5.0 << '\n'; // prints "5", dont include ".0"
	std::cout << 6.7f << '\n'; // prints "6.7"
	std::cout << 9876543.21 << '\n';  // prints "9.87654e+06", scientific notation

	return 0;
}
