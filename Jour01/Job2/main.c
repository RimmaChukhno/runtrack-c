#include <stdio.h>
#include "my_strlen.c"

int main() {
    char str[] = "Hello, world!";
    printf("La longueur de la chaîne est : %d\n", my_strlen(str));
    return 0;
}
