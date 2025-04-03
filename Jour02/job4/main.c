#include <stdio.h>
#include "sort.h"

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
    char *words[] = {"banana", "apple", "cherry", "date", NULL};

    printf("Avant le tri :\n");
    print_array(words);

    sort(words);

    printf("\nApres le tri :\n");
    print_array(words);

    return 0;
}
