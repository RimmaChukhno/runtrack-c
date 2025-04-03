#include <unistd.h>
#include "power.h"

// Fonction pour afficher un entier (sans printf)
void my_putnbr(int n) {
    char buffer[12]; // Stocker l'entier converti en string (int max ≈ 10 chiffres + signe)
    int i = 0;

    if (n == 0) {
        write(1, "0", 1);
        return;
    }

    if (n < 0) {
        write(1, "-", 1);
        n = -n;
    }

    while (n > 0) {
        buffer[i++] = '0' + (n % 10);
        n /= 10;
    }

    while (i--) {
        write(1, &buffer[i], 1);
    }
}

void test_power(int base, int exponent) {
    int result = power(base, exponent);
    my_putnbr(result);
    write(1, "\n", 1);
}

int main() {
    test_power(2, 3);  // 2^3 = 8
    test_power(5, 0);  // 5^0 = 1
    test_power(7, 2);  // 7^2 = 49
    test_power(3, 4);  // 3^4 = 81
    test_power(10, 5); // 10^5 = 100000
    test_power(2, -2); // Cas non géré → Retourne 0

    return 0;
}
