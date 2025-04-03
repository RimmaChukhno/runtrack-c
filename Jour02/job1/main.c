#include <stdio.h>
#include "divide.h"

int main()
{
    int number = 10;

    printf("Avant : %d\n", number);
    divide(&number);
    printf("Après : %d\n", number);

    return 0;
}
