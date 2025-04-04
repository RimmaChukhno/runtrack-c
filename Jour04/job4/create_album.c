#include <stdlib.h>
#include "album.h"

album *create_album(char *artist, char *title, int year) {
    album *a = malloc(sizeof(album));
    if (!a)
        return NULL;

    a->artist = artist;
    a->title = title;
    a->year = year;
    a->next = NULL;

    return a;
}
