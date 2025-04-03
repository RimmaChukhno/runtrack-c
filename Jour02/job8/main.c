#include <unistd.h> // Pour write
#include <stdlib.h> // Pour malloc et free
#include <string.h> // Pour strlen, strcpy
#include "string_utils.h"

// Fonction pour afficher une chaîne sur la sortie standard
void my_putstr(const char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

// Fonction pour afficher un tableau de chaînes triées sur une seule ligne
void print_sorted_words(char **words, int count)
{
    for (int i = 0; i < count; i++)
    {
        my_putstr(words[i]);
        if (i < count - 1)
        {
            write(1, " ", 1); // Un espace entre les mots
        }
    }
    write(1, "\n", 1); // Retour à la ligne après les mots
}

int main(int argc, char **argv)
{
    if (argc < 2)
        return 0; // Si aucun argument, on termine

    // Tableau pour stocker les mots après trim
    char **words = malloc((argc - 1) * sizeof(char *));
    if (!words)
        return 1;

    // Trim et stockage des mots
    int word_count = 0;
    for (int i = 1; i < argc; i++)
    {
        char *trimmed = trim(argv[i]);
        if (trimmed)
        {
            words[word_count++] = trimmed;
        }
    }

    // Trier les mots
    qsort(words, word_count, sizeof(char *), compare);

    // Afficher les mots triés
    print_sorted_words(words, word_count);

    // Libérer la mémoire
    for (int i = 0; i < word_count; i++)
    {
        free(words[i]);
    }
    free(words);

    return 0;
}
