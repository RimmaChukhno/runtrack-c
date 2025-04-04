#include <stdlib.h>  
#include <stdio.h>
#include "album.h"

int main() {
    album *a = create_album("Nirvana", "Nevermind", 1991);
    if (a)
        printf("\"%s\" by %s released in %d\n", a->title, a->artist, a->year);

    free(a);  // Libération de l’album
    return 0;
}
