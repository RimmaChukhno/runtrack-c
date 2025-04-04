#ifndef ALBUM_H
#define ALBUM_H

typedef struct album {
    char *title;
    char *artist;
    int year;
} album;

album *realloc_album(album *old_array, int old_size, int new_size);

#endif
