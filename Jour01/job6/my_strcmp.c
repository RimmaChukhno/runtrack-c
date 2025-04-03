#include "my_strcmp.h"

int my_strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) { // Parcours tant que les caractères sont égaux et que s1 n'est pas '\0'
        s1++;
        s2++;
    }
    return *s1 - *s2; // Retourne la différence ASCII entre les premiers caractères différents
}
