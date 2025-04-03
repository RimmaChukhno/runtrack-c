#include <stdio.h>
#include "string_utils.h"

// Convertit une chaîne en majuscules
void strtoupper(char *str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str -= 32;  // Convertir en majuscule
        }
        str++;
    }
}

// Convertit une chaîne en minuscules
void strtolower(char *str) {
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            *str += 32;  // Convertir en minuscule
        }
        str++;
    }
}

// Affiche une chaîne avec un retour à la ligne
void my_putstr(char *str) {
    if (!str) return;
    while (*str) {
        putchar(*str);
        str++;
    }
    putchar('\n');
}
