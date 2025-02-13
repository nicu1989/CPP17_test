#include <iostream>
#include "math/math_functions.h"

int main() {
    std::cout << "5 + 3 = " << math::add(5, 3) << std::endl;
    std::cout << "5 - 3 = " << math::subtract(5, 3) << std::endl;
    std::cout << "5 * 3 = " << math::multiply(5, 3) << std::endl;
    return 0;
}
