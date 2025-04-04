#ifndef ALBUM_H
#define ALBUM_H

typedef struct album {
    char *title;
    char *artist;
    int year;
} t_album;

typedef struct album_list {
    t_album *album;
    struct album_list *next;
} t_album_list;

void push_back_album(t_album_list *list, t_album_list *album);
t_album_list *create_album(char *artist, char *title, int year);
void print_album_list(t_album_list *list);

#endif
