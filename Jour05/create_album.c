#include <stdlib.h>
#include <string.h>
#include "album.h"

t_album_list *create_album(char *artist, char *title, int year) {
    t_album_list *new = malloc(sizeof(t_album_list));
    if (!new) return NULL;

    new->artist = strdup(artist);
    new->title = strdup(title);
    new->year = year;
    new->next = NULL;
    return new;
}
