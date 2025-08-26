#include "math/add.h"
#include "math/multiply.h"
#include "util/print.h"

int main() {
    int s = add(3, 4);
    int p = multiply(3, 4);

    print_result("sum", s);
    print_result("product", p);
    return 0;
}
