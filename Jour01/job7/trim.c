#include "trim.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


char *trim(const char *str) {
    // Gestion du cas NULL
    if (str == NULL) return NULL;

    // D�but de la cha�ne
    const char *start = str;
    while (*start == ' ' || *start == '\t' || *start == '\n' ||
           *start == '\r' || *start == '\f' || *start == '\v') {
        start++;
    }

    // Si cha�ne vide apr�s suppression des espaces
    if (*start == '\0') {
        char *result = malloc(1);
        if (result) *result = '\0';
        return result;
    }

    // Fin de la cha�ne
    const char *end = start;
    while (*end != '\0') end++;
    end--;  // On se place sur le dernier caract�re avant '\0'

    while (end > start && (*end == ' ' || *end == '\t' || *end == '\n' ||
                          *end == '\r' || *end == '\f' || *end == '\v')) {
        end--;
    }

    // Allocation et copie
    size_t length = end - start + 1;
    char *result = malloc(length + 1);  // +1 pour le '\0'
    if (result == NULL) return NULL;

    for (size_t i = 0; i < length; i++) {
        result[i] = start[i];
    }
    result[length] = '\0';

    return result;
}
