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

void album_del_one(t_album_list **list, t_album_list *album_to_delete);
t_album_list *create_album(char *artist, char *title, int year);
void push_front_album(t_album_list **list, t_album_list *album);
void print_album_list(t_album_list *list);

#endif
