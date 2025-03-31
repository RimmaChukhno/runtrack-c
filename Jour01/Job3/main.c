#include <stdio.h>
#include "char_is_digit.c"
#include "str_is_digit.c"

int main() {
    // Test de char_is_digit
    printf("char_is_digit('5') = %d\n", char_is_digit('5')); // 1
    printf("char_is_digit('a') = %d\n", char_is_digit('a')); // 0

    // Test de str_is_digit
    printf("str_is_digit(\"12345\") = %d\n", str_is_digit("12345")); // 1
    printf("str_is_digit(\"12a45\") = %d\n", str_is_digit("12a45")); // 0
    printf("str_is_digit(\"\") = %d\n", str_is_digit(""));           // 0

    return 0;
}
