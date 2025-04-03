#include <stdlib.h>  // Pour free
#include <stddef.h>  // Pour NULL
#include "delete_str_array.h"

void delete_str_array(char ***arr) {
    if (!arr || !(*arr)) return;  // Vérifie si le pointeur est valide

    for (int i = 0; (*arr)[i] != NULL; i++) {
        free((*arr)[i]);  // Libère chaque chaîne de caractères
    }
    
    free(*arr);  // Libère le tableau lui-même
    *arr = NULL; // Met le pointeur à NULL
}
