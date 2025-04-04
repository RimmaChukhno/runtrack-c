#include "album.h"

void sort_album_by(t_album_list *list, int (*cmp)(t_album_list *, t_album_list *)) {
    if (!list || !cmp)
        return;

    for (t_album_list *i = list; i && i->next; i = i->next) {
        for (t_album_list *j = i->next; j; j = j->next) {
            if (cmp(i, j) > 0) {
                // Échange les données, pas les pointeurs
                char *tmp_title = i->title;
                char *tmp_artist = i->artist;
                int tmp_year = i->year;

                i->title = j->title;
                i->artist = j->artist;
                i->year = j->year;

                j->title = tmp_title;
                j->artist = tmp_artist;
                j->year = tmp_year;
            }
        }
    }
}
