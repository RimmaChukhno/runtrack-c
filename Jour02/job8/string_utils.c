#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "string_utils.h"

// Implémentation de strdup si non disponible
#ifndef HAVE_STRDUP
char *strdup(const char *s)
{
    size_t len = strlen(s) + 1;
    char *dup = malloc(len);
    if (dup)
        memcpy(dup, s, len);
    return dup;
}
#endif

char *trim(const char *str)
{
    if (!str)
        return NULL;

    // Suppression des espaces au début
    while (*str && isspace((unsigned char)*str))
        str++;

    if (*str == '\0')
        return strdup("");

    // Suppression des espaces à la fin
    const char *end = str + strlen(str) - 1;
    while (end > str && isspace((unsigned char)*end))
        end--;

    size_t len = end - str + 1;
    char *trimmed = malloc(len + 1);
    if (!trimmed)
        return NULL;

    strncpy(trimmed, str, len);
    trimmed[len] = '\0';

    return trimmed;
}

int compare(const void *a, const void *b)
{
    const char *sa = *(const char **)a;
    const char *sb = *(const char **)b;
    return strcmp(sa, sb);
}