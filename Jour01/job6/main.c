#include <stdio.h>

int my_strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}

int main() {
    char *s1 = "abc";
    char *s2 = "abd";
    char *s3 = "abc";
    char *s4 = "ab";
    char *s5 = "abcd";

    printf("Comparaison de \"%s\" et \"%s\" : %d\n", s1, s2, my_strcmp(s1, s2)); // Résultat < 0
    printf("Comparaison de \"%s\" et \"%s\" : %d\n", s1, s3, my_strcmp(s1, s3)); // Résultat 0
    printf("Comparaison de \"%s\" et \"%s\" : %d\n", s1, s4, my_strcmp(s1, s4)); // Résultat > 0
    printf("Comparaison de \"%s\" et \"%s\" : %d\n", s1, s5, my_strcmp(s1, s5)); // Résultat < 0

    return 0;
}
