#include <stdlib.h>  // Pour malloc
#include "my_strlen.h" // Déclaration de my_strlen
#include "my_strcpy.h" // Déclaration de my_strcpy

char *my_strdup(const char *src) {
    if (!src) return NULL; // Vérifie si src est NULL

    int length = my_strlen(src); // Obtient la longueur de la chaîne
    char *copy = malloc(length + 1); // Alloue la mémoire (taille +1 pour '\0')

    if (!copy) return NULL; // Vérifie si l'allocation a échoué

    my_strcpy(copy, src); // Copie la chaîne source dans la mémoire allouée

    return copy; // Retourne le pointeur de la nouvelle chaîne
}
