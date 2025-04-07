#include <string.h>
#include <unistd.h>
#include "album.h"

extern t_album_list *read_album_file(const char *filename);
extern int compare_by_artist(t_album_list *, t_album_list *);
extern int compare_by_title(t_album_list *, t_album_list *);
extern int compare_by_year(t_album_list *, t_album_list *);

int main(int argc, char **argv) {
    if (argc != 3) return 0;

    t_album_list *list = read_album_file(argv[1]);
    if (!list) {
        write(2, "File not found.\n", 17);
        return 1;
    }

    int (*cmp)(t_album_list *, t_album_list *) = NULL;
    if (strcmp(argv[2], "artist") == 0) cmp = compare_by_artist;
    else if (strcmp(argv[2], "title") == 0) cmp = compare_by_title;
    else if (strcmp(argv[2], "year") == 0) cmp = compare_by_year;
    else {
        write(2, "Sort method does not exist.\n", 29);
        return 1;
    }

    sort_album_by(list, cmp);
    print_album_list(list);
    return 0;
}
