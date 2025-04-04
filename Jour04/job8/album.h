#ifndef ALBUM_H
#define ALBUM_H

typedef struct s_album_list {
    char *title;
    char *artist;
    int year;
    struct s_album_list *next;
} t_album_list;

// Prototypes
t_album_list *create_album(const char *title, const char *artist, int year);
void push_back_album(t_album_list **list, t_album_list *album);
void print_album_list(t_album_list *list);
void album_del_one(t_album_list **list, t_album_list *album);
void sort_album_by(t_album_list *list, int (*cmp)(t_album_list *, t_album_list *));

#endif
