#include <unistd.h>
#include <string.h>
#include "album.h"

void print_str(const char *str) {
    write(1, str, strlen(str));
}

void print_album_list(t_album_list *list) {
    char buffer[64];
    while (list) {
        print_str("\"");
        print_str(list->title);
        print_str("\" by \"");
        print_str(list->artist);
        print_str("\" released in ");
        int len = sprintf(buffer, "%d.\n", list->year);
        write(1, buffer, len);
        list = list->next;
    }
}
