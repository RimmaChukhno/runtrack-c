// compare_by_year.c
#include "album.h"

int compare_by_year(t_album_list *a, t_album_list *b) {
    return a->year - b->year;
}
