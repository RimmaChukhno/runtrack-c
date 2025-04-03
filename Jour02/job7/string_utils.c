#include "string_utils.h"
#include <stdlib.h>  // Pour malloc et free
#include <stddef.h>  // Pour NULL

char *strtolower(const char *str) {
    if (!str) return NULL;

    int i = 0;
    while (str[i]) i++;  // Calcul de la longueur

    char *lower = malloc((i + 1) * sizeof(char));
    if (!lower) return NULL;  // Vérification de l'allocation

    for (int j = 0; j < i; j++) {
        lower[j] = (str[j] >= 'A' && str[j] <= 'Z') ? str[j] + 32 : str[j];
    }
    lower[i] = '\0';  // Ajout du caractère nul

    return lower;
}
