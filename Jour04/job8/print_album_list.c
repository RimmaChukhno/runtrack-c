#include <stdio.h>
#include "album.h"

void print_album_list(t_album_list *list) {
    t_album_list *current = list;
    while (current != NULL) {
        printf("Titre : %s\n", current->title);
        printf("Artiste : %s\n", current->artist);
        printf("Année : %d\n", current->year);
        printf("------------------------\n");
        current = current->next;
    }
}
