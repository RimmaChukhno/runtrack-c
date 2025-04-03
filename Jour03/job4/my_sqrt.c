#include "my_sqrt.h"

int my_sqrt(int n) {
    if (n < 0) return 0; // Pas de racine carrée pour les nombres négatifs

    int i = 0;
    while (i * i <= n) {
        if (i * i == n) {
            return i; // Trouvé
        }
        i++;
    }

    return 0; // Pas une racine carrée parfaite
}
