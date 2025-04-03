#include <stdio.h>
#include "func_to_array.h"

void strtoupper(char *str);
void strtolower(char *str);
void my_putstr(char *str);

int main()
{
    char str1[] = "Hello";
    char str2[] = "World!";
    char str3[] = "Test 123";

    char *words[] = {str1, str2, str3, NULL};

    printf("Avant strtoupper :\n");
    func_to_array(words, my_putstr);

    func_to_array(words, strtoupper);

    printf("\nApres strtoupper :\n");
    func_to_array(words, my_putstr);

    func_to_array(words, strtolower);

    printf("\nApres strtolower :\n");
    func_to_array(words, my_putstr);

    return 0;
}
