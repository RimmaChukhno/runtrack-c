#include <stddef.h> // pour NULL
#include "album.h"

void push_front_album(t_album_list **list, t_album_list *album) {
    if (!list || !album)
        return;

    // Ajoute l'album au début de la liste
    album->next = *list; // Le prochain album de l'album à ajouter est la tête actuelle de la liste
    *list = album; // La tête de la liste devient le nouvel album
}
