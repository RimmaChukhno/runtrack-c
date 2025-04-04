#include <stdlib.h>
#include <string.h>
#include "album.h"

void album_del_one(t_album_list **list, t_album_list *album) {
    if (!list || !*list || !album)
        return;

    t_album_list *prev = NULL;
    t_album_list *curr = *list;

    while (curr) {
        if (curr == album) {
            if (prev)
                prev->next = curr->next;
            else
                *list = curr->next;

            free(curr->title);
            free(curr->artist);
            free(curr);
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}
