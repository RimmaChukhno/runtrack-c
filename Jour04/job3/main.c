#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "album.h"

int main() {
    int old_size = 2;
    album *albums = malloc(sizeof(album) * old_size);

    albums[0].title = strdup("Thriller");
    albums[0].artist = strdup("Michael Jackson");
    albums[0].year = 1982;

    albums[1].title = strdup("Back in Black");
    albums[1].artist = strdup("AC/DC");
    albums[1].year = 1980;

    int new_size = 4;
    albums = realloc_album(albums, old_size, new_size);

    albums[2].title = strdup("The Wall");
    albums[2].artist = strdup("Pink Floyd");
    albums[2].year = 1979;

    for (int i = 0; i < new_size; i++) {
        if (albums[i].title)
            printf("\"%s\" by %s (%d)\n", albums[i].title, albums[i].artist, albums[i].year);
    }

    // Libérer toutes les chaînes
    for (int i = 0; i < new_size; i++) {
        free(albums[i].title);
        free(albums[i].artist);
    }
    free(albums);
    return 0;
}
