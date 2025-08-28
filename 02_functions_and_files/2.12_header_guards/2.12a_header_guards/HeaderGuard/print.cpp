#include <iostream>
#include "util/print.h"

void print_result(std::string_view label, int value) {
    std::cout << label << ": " << value << std::endl;
}
