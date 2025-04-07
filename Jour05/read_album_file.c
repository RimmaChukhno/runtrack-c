#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "album.h"

#define BUF_SIZE 4096

t_album_list *read_album_file(const char *filename) {
    int fd = open(filename, O_RDONLY);
    if (fd == -1) return NULL;

    char buf[BUF_SIZE];
    int bytes = read(fd, buf, BUF_SIZE - 1);
    close(fd);
    if (bytes <= 0) return NULL;
    buf[bytes] = '\0';

    t_album_list *list = NULL;
    char *line = strtok(buf, "\n");
    while (line) {
        char *artist = strtok(line, ",");
        char *title = strtok(NULL, ",");
        char *year_str = strtok(NULL, ",");

        if (!artist || !title || !year_str) return NULL;

        int year = atoi(year_str);
        t_album_list *album = create_album(artist, title, year);
        push_back_album(&list, album);
        line = strtok(NULL, "\n");
    }

    return list;
}
