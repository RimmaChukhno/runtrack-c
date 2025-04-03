#include "power.h"

int power(int base, int exponent) {
    if (exponent < 0) return 0; // On ne gère pas les exposants négatifs en int

    int result = 1;
    while (exponent > 0) {
        result *= base;
        exponent--;
    }

    return result;
}
