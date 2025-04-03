#include "my_atoi.h"

int my_atoi(const char *str) {
    if (!str) return 0; // Sécurité si str est NULL

    int result = 0;
    int sign = 1;

    // Ignorer les espaces initiaux
    while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r' || *str == '\f' || *str == '\v') {
        str++;
    }

    // Gérer le signe (+ ou -)
    if (*str == '-') {
        sign = -1;
        str++;
    } else if (*str == '+') {
        str++;
    }

    // Conversion des chiffres en entier
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }

    return result * sign;
}
