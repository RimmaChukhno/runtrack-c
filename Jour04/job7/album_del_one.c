#include <stdlib.h>
#include "album.h"

void album_del_one(t_album_list **list, t_album_list *album_to_delete) {
    if (!list || !*list || !album_to_delete)
        return;

    // Cas où l'album à supprimer est le premier de la liste
    if (*list == album_to_delete) {
        *list = album_to_delete->next;
        free(album_to_delete->album);  // Libère la mémoire de l'album lui-même
        free(album_to_delete);         // Libère la mémoire de l'élément de la liste
        return;
    }

    // Cas où l'album à supprimer est quelque part après le premier de la liste
    t_album_list *current = *list;
    while (current->next != NULL) {
        if (current->next == album_to_delete) {
            current->next = album_to_delete->next;  // Retirer l'album de la liste
            free(album_to_delete->album);  // Libère l'album
            free(album_to_delete);         // Libère l'élément de la liste
            return;
        }
        current = current->next;
    }
}
