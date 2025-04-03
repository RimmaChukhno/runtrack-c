#include <stdio.h>
#include <stdlib.h>
#include "my_strdup.h"

int main() {
    char src[] = "Hello, world!";
    char *copy = my_strdup(src); // Duplique la chaîne

    if (copy) {
        printf("Chaîne originale : %s\n", src);
        printf("Chaîne dupliquée : %s\n", copy);
        free(copy); // Libère la mémoire allouée
    } else {
        printf("Échec de l'allocation mémoire\n");
    }

    return 0;
}
