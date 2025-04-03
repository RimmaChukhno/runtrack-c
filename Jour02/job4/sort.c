#include <stddef.h>  

// Fonction pour comparer deux chaînes de caractères (équivalent à strcmp)
int str_compare(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (unsigned char)(*s1) - (unsigned char)(*s2);
}

// Fonction pour trier un tableau de chaînes de caractères (Tri à bulles)
void sort(char **arr) {
    if (!arr) return;

    int swapped;
    for (int i = 0; arr[i] != NULL; i++) {
        swapped = 0;
        for (int j = 0; arr[j + 1] != NULL; j++) {
            if (str_compare(arr[j], arr[j + 1]) > 0) {
                // Échanger les pointeurs des chaînes
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break; // Optimisation : arrêter si plus d'échange
    }
}
