#include <stdlib.h>
#include "my_itoa.h"

// Fonction pour calculer la longueur d'un nombre (y compris le signe)
static int get_length(int n) {
    int len = (n <= 0) ? 1 : 0;  // 1 pour le signe si négatif ou si n == 0
    while (n) {
        len++;
        n /= 10;
    }
    return len;
}

char *my_itoa(int n) {
    int len = get_length(n);
    char *str = (char *)malloc(len + 1);  // +1 pour le '\0'
    if (!str) return NULL;

    str[len] = '\0';  // Ajouter le caractère de fin

    // Gérer le cas spécial de 0
    if (n == 0) {
        str[0] = '0';
        return str;
    }

    // Gérer le signe pour les nombres négatifs
    int is_negative = (n < 0);
    if (is_negative) n = -n;  // Convertir en positif pour traiter les chiffres

    // Remplir la chaîne en commençant par la fin
    while (n) {
        str[--len] = '0' + (n % 10);
        n /= 10;
    }

    // Ajouter le signe si nécessaire
    if (is_negative) str[0] = '-';

    return str;
}
