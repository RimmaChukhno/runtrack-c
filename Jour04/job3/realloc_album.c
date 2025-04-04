#include <stdlib.h>
#include "album.h"

// Fonction de reallocation d'un tableau de struct album
album *realloc_album(album *old_array, int old_size, int new_size) {
    // Allouer un nouveau tableau à la nouvelle taille
    album *new_array = malloc(sizeof(album) * new_size);
    if (!new_array)
        return NULL;

    // Copier les anciens éléments (jusqu'à old_size ou new_size, le plus petit)
    int limit = old_size < new_size ? old_size : new_size;
    for (int i = 0; i < limit; i++) {
        new_array[i] = old_array[i]; // Copie superficielle (shallow copy)
    }

    // Libérer l'ancien tableau
    free(old_array);

    return new_array;
}
