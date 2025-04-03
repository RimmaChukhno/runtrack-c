#include <stdio.h>
#include "my_strcpy.c"

int main() {
    char src[] = "Hello, world!";
    char dest[50]; 

    my_strcpy(dest, src);

    printf("Chaîne copiée : %s\n", dest);

    return 0;
}
