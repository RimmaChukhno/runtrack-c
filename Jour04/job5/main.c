#include <stdio.h>
#include <stdlib.h>
#include "album.h"

int main() {
    t_album_list *list = NULL;

    // Création de quelques albums
    t_album_list *a1 = create_album("Metallica", "Master of Puppets", 1986);
    t_album_list *a2 = create_album("Nirvana", "In Utero", 1993);
    t_album_list *a3 = create_album("Pink Floyd", "The Wall", 1979);

    // Ajouter les albums à la liste
    push_back_album(list, a1);
    push_back_album(list, a2);
    push_back_album(list, a3);

    // Afficher la liste
    print_album_list(list);

    // Libérer la mémoire (à ajouter pour gérer la mémoire proprement)
    // ...

    return 0;
}
