#include "trim.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *test = "  \tHello World\n \t";
    char *trimmed = trim(test);

    printf("Avant : [%s]\n", test);
    printf("Apres : [%s]\n", trimmed);

    free(trimmed);
    return 0;
}
