#include <unistd.h>  // Pour write
#include <stdlib.h>  // Pour free
#include "string_utils.h"

void my_putstr(const char *str) {
    while (*str) {
        write(1, str, 1);
        str++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv) {
    if (argc < 2) return 0;  // Si aucun argument, on ne fait rien

    for (int i = 1; i < argc; i++) {
        char *lower = strtolower(argv[i]);
        if (lower) {
            my_putstr(lower);
            free(lower);  // Libération de la mémoire
        }
    }
    
    return 0;
}
