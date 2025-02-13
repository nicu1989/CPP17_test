#include "math_functions.h"
#define ADD(a,b) (a+b)
namespace math {
    int add(int a, int b) {
        return ADD(a,b);
    }

    int subtract(int a, int b) {
        return a - b;
    }

    int multiply(int a, int b) {
        return a * b;
    }
}
