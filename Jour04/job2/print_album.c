#include <unistd.h>
#include "album.h"

// Petite fonction utilitaire pour afficher une chaîne
void my_putstr(const char *str) {
    while (*str)
        write(1, str++, 1);
}

// Fonction principale
void print_album(album *a) {
    my_putstr("\"");
    my_putstr(a->title);
    my_putstr("\" by \"");
    my_putstr(a->artist);
    my_putstr("\" released in ");

    // Conversion manuelle de l’année (int → string)
    int year = a->year;
    char buffer[5];
    for (int i = 3; i >= 0; i--) {
        buffer[i] = '0' + (year % 10);
        year /= 10;
    }
    buffer[4] = '\0';
    my_putstr(buffer);
    my_putstr(".\n");
}
