#include <unistd.h>
#include "fibonacci.h"

// Fonction pour convertir un entier en chaîne et l'afficher
void my_putnbr(int n) {
    char buffer[12]; // Stocker l'entier converti en string (int max ≈ 10 chiffres)
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

// Fonction pour convertir une chaîne en entier (sans atoi)
int my_atoi(const char *str) {
    int result = 0;
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }
    return result;
}

int main(int argc, char **argv) {
    if (argc != 2) return 0; // Ne rien faire s'il n'y a pas d'argument

    int num = my_atoi(argv[1]);
    int result = fibonacci(num);

    my_putnbr(result);
    write(1, "\n", 1);

    return 0;
}
