#include <stddef.h> // pour NULL
#include "album.h"

void push_back_album(t_album_list *list, t_album_list *album) {
    if (!list || !album)
        return;

    album->next = NULL;

    t_album_list *current = list;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = album;
}
