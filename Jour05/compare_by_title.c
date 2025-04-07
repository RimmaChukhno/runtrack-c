// compare_by_title.c
#include <string.h>
#include "album.h"

int compare_by_title(t_album_list *a, t_album_list *b) {
    return strcmp(a->title, b->title);
}
