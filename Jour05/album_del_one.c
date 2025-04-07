#include <stdlib.h>
#include "album.h"

void album_del_one(t_album_list **list, t_album_list *to_delete) {
    if (!list || !*list || !to_delete) return;
    if (*list == to_delete) {
        *list = (*list)->next;
    } else {
        t_album_list *cur = *list;
        while (cur->next && cur->next != to_delete) cur = cur->next;
        if (cur->next) cur->next = to_delete->next;
    }
    free(to_delete->artist);
    free(to_delete->title);
    free(to_delete);
}
