#ifndef ALBUM_H
#define ALBUM_H

typedef struct s_album {
    char *artist;
    char *title;
    int year;
    struct s_album *next;
} t_album_list;

t_album_list *create_album(char *artist, char *title, int year);
void push_back_album(t_album_list **list, t_album_list *album);
void sort_album_by(t_album_list *list, int (*cmp)(t_album_list *, t_album_list *));
void print_album_list(t_album_list *list);
void album_del_one(t_album_list **list, t_album_list *to_delete);
void free_album_list(t_album_list **list);

#endif
