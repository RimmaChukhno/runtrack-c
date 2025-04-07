// compare_by_artist.c
#include <string.h>
#include "album.h"

int compare_by_artist(t_album_list *a, t_album_list *b) {
    return strcmp(a->artist, b->artist);
}
