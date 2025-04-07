#include "album.h"

void sort_album_by(t_album_list *list, int (*cmp)(t_album_list *, t_album_list *)) {
    if (!list || !cmp) return;
    t_album_list *i = list;
    while (i) {
        t_album_list *j = i->next;
        while (j) {
            if (cmp(i, j) > 0) {
                char *tmp_artist = i->artist;
                char *tmp_title = i->title;
                int tmp_year = i->year;

                i->artist = j->artist;
                i->title = j->title;
                i->year = j->year;

                j->artist = tmp_artist;
                j->title = tmp_title;
                j->year = tmp_year;
            }
            j = j->next;
        }
        i = i->next;
    }
}
