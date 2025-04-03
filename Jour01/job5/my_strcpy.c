#include "my_strcpy.h"

char *my_strcpy(char *dest, const char *src) {
    char *ptr = dest;
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return ptr;
}
