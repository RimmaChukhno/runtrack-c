#ifndef ALBUM_H
#define ALBUM_H

typedef struct album {
    char *title;
    char *artist;
    int year;
    struct album *next;
} album;

album *create_album(char *artist, char *title, int year);

#endif
