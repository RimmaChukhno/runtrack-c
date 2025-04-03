#include "itoa_hex.h"
#include <stdlib.h>

char *itoa_hex(int n) {
    // Si le nombre est 0, on retourne la chaîne "0"
    if (n == 0) {
        char *result = (char *)malloc(2 * sizeof(char)); // "0" + '\0'
        if (!result) return NULL; // Vérification de l'allocation mémoire
        result[0] = '0';
        result[1] = '\0';
        return result;
    }

    // Définir les caractères hexadécimaux
    const char hex_chars[] = "0123456789ABCDEF";
    
    // Compter le nombre de chiffres hexadécimaux nécessaires
    int temp = n;
    int len = 0;
    while (temp != 0) {
        len++;
        temp /= 16;
    }

    // Allocation de mémoire pour le résultat
    char *result = (char *)malloc((len + 1) * sizeof(char)); // +1 pour le '\0'
    if (!result) return NULL; // Vérification de l'allocation mémoire

    result[len] = '\0'; // Null-terminer la chaîne

    // Remplir le tableau de caractères hexadécimaux
    for (int i = len - 1; i >= 0; i--) {
        result[i] = hex_chars[n % 16]; // Placer le caractère hexadécimal
        n /= 16;
    }

    return result;
}
