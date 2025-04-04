#include "album.h"

void push_back_album(t_album_list **list, t_album_list *album) {
    if (!list || !album)
        return;

    if (!*list) {
        *list = album;
        return;
    }

    t_album_list *current = *list;
    while (current->next)
        current = current->next;

    current->next = album;
}
