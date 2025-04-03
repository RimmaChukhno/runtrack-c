#include <stdio.h>
#include "swap.h"

int main()
{
    int x = 5, y = 10;

    printf("Avant l'échange : x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("Apres l'échange : x = %d, y = %d\n", x, y);

    return 0;
}
