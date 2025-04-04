#include "album.h"

int main() {
    album a = {
        .title = "Master of Puppets",
        .artist = "Metallica",
        .year = 1986
    };

    print_album(&a);
    return 0;
}
