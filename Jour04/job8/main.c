#include <stdio.h>
#include <stdlib.h>
#include "album.h"

// Fonction de comparaison pour trier par année
int compare_by_year(t_album_list *a, t_album_list *b) {
    return a->year - b->year;
}

int main(void) {
    t_album_list *list = NULL;

    // Création d'albums
    t_album_list *a1 = create_album("Master of Puppets", "Metallica", 1986);
    t_album_list *a2 = create_album("The Dark Side of the Moon", "Pink Floyd", 1973);
    t_album_list *a3 = create_album("Back in Black", "AC/DC", 1980);

    // Ajout à la liste
    push_back_album(&list, a1);
    push_back_album(&list, a2);
    push_back_album(&list, a3);

    printf("=== Liste originale ===\n");
    print_album_list(list);

    // Trier
    sort_album_by(list, compare_by_year);
    printf("\n=== Liste triée par année ===\n");
    print_album_list(list);

    // Suppression d'un album
    album_del_one(&list, a2);
    printf("\n=== Après suppression ===\n");
    print_album_list(list);

    // Libérer la mémoire
    album_del_one(&list, a1);
    album_del_one(&list, a3);

    return 0;
}
