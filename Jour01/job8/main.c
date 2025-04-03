#include <stdio.h>
#include <stdlib.h>
#include "split.h"

int main() {
    char **words = split("  hello   world \n have fun\t");

    if (!words) {
        printf("Erreur d'allocation mémoire\n");
        return 1;
    }

    for (int i = 0; words[i] != NULL; i++) {
        printf("[%s]\n", words[i]);
        free(words[i]); // Libération de chaque mot
    }

    free(words); // Libération du tableau
    return 0;
}
