#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "delete_str_array.h"

// Fonction pour allouer dynamiquement un tableau de chaînes
char **create_str_array()
{
    char **arr = malloc(4 * sizeof(char *)); // Allouer un tableau de 4 éléments
    if (!arr)
        return NULL;

    arr[0] = strdup("Hello");
    arr[1] = strdup("World!");
    arr[2] = strdup("Test");
    arr[3] = NULL; // Fin du tableau

    return arr;
}

// Fonction pour afficher un tableau de chaînes
void print_str_array(char **arr)
{
    if (!arr)
    {
        printf("Tableau NULL\n");
        return;
    }

    for (int i = 0; arr[i] != NULL; i++)
    {
        printf("[%s]\n", arr[i]);
    }
}

int main()
{
    char **words = create_str_array();

    printf("Avant suppression :\n");
    print_str_array(words);

    delete_str_array(&words);

    printf("\nAprès suppression :\n");
    print_str_array(words); // Doit afficher "Tableau NULL"

    return 0;
}
