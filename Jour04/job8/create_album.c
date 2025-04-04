#include <stdlib.h>
#include <string.h>
#include "album.h"

t_album_list *create_album(const char *title, const char *artist, int year) {
    t_album_list *new_album = malloc(sizeof(t_album_list));
    if (!new_album) return NULL;

    new_album->title = strdup(title);
    new_album->artist = strdup(artist);
    new_album->year = year;
    new_album->next = NULL;

    return new_album;
}
