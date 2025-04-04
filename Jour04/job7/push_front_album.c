#include "album.h"

void push_front_album(t_album_list **list, t_album_list *album) {
    if (!list || !album)
        return;

    album->next = *list;
    *list = album;
}
