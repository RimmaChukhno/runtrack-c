#include <unistd.h>
#include <stdlib.h>
#include "my_itoa.h"

// Fonction pour afficher une chaîne sur la sortie standard
void my_putstr(const char *str) {
    while (*str) {
        write(1, str, 1);
        str++;
    }
}

// Fonction pour tester my_itoa avec plusieurs valeurs
void test_my_itoa(int n) {
    char *str = my_itoa(n);
    if (str) {
        my_putstr(str);
        write(1, "\n", 1);
        free(str);  // Libérer la mémoire
    }
}

int main() {
    test_my_itoa(0);
    test_my_itoa(42);
    test_my_itoa(-12345);
    test_my_itoa(987654321);
    test_my_itoa(-2147483648);  // Cas particulier (int min)

    return 0;
}
