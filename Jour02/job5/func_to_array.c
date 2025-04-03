#include <stddef.h>  // Pour NULL

void func_to_array(char **arr, void (*func)(char *)) {
    if (!arr || !func) return;  // Vérification des pointeurs

    for (int i = 0; arr[i] != NULL; i++) {
        func(arr[i]);  // Appliquer la fonction à chaque élément
    }
}
