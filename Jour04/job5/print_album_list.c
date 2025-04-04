#include <stdio.h>
#include "album.h"

void print_album_list(t_album_list *list) {
    t_album_list *current = list;
    while (current != NULL) {
        printf("\"%s\" by %s (%d)\n", current->album->title, current->album->artist, current->album->year);
        current = current->next;
    }
}
