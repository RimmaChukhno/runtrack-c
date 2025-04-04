#include <stdlib.h>
#include "album.h"

t_album_list *create_album(char *artist, char *title, int year) {
    t_album_list *new_album = malloc(sizeof(t_album_list));
    if (!new_album)
        return NULL;

    // Initialisation de l'album
    new_album->album = malloc(sizeof(t_album));
    if (!new_album->album) {
        free(new_album);
        return NULL;
    }

    new_album->album->artist = artist;
    new_album->album->title = title;
    new_album->album->year = year;
    new_album->next = NULL;

    return new_album;
}
