#include <stdlib.h>
#include "split.h"

int is_separator(char c) {
    return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(const char *str) {
    int count = 0, in_word = 0;

    while (*str) {
        if (is_separator(*str)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
        str++;
    }
    return count;
}

char *copy_word(const char *start, int length) {
    char *word = (char *)malloc(sizeof(char) * (length + 1));
    if (!word) return NULL;
    for (int i = 0; i < length; i++) {
        word[i] = start[i];
    }
    word[length] = '\0';
    return word;
}

char **split(const char *str) {
    int word_count = count_words(str);
    char **result = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (!result) return NULL;

    int index = 0;
    while (*str) {
        while (*str && is_separator(*str)) str++;  // Ignorer les séparateurs

        const char *word_start = str;
        int length = 0;
        while (*str && !is_separator(*str)) {
            length++;
            str++;
        }

        if (length > 0) {
            result[index++] = copy_word(word_start, length);
        }
    }

    result[index] = NULL;
    return result;
}
