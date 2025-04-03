#include <stdio.h>
#include <stdlib.h>
#include "array_clone.h"

void print_array(char **arr)
{
    if (!arr)
    {
        printf("NULL\n");
        return;
    }
    for (int i = 0; arr[i] != NULL; i++)
    {
        printf("[%s]\n", arr[i]);
    }
}

int main()
{
    char *words[] = {"hello", "world", "have", "fun", NULL};

    printf("Tableau original :\n");
    print_array(words);

    int n = 3;
    char **cloned_array = array_clone(words, n);

    printf("\nTableau clone (n = %d) :\n", n);
    print_array(cloned_array);

    // Libération de la mémoire
    for (int i = 0; cloned_array[i] != NULL; i++)
    {
        free(cloned_array[i]);
    }
    free(cloned_array);

    return 0;
}
