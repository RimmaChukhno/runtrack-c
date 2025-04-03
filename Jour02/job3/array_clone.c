#include <stdlib.h>

// Fonction pour copier une chaîne de caractères
char *str_duplicate(const char *str)
{
    int len = 0;
    while (str[len])
        len++; // Calcul de la longueur

    char *copy = (char *)malloc(sizeof(char) * (len + 1));
    if (!copy)
        return NULL;

    for (int i = 0; i < len; i++)
    {
        copy[i] = str[i];
    }
    copy[len] = '\0';

    return copy;
}

// Fonction principale pour cloner le tableau
char **array_clone(char **arr, int n)
{
    if (!arr || n <= 0)
        return NULL;

    char **clone = (char **)malloc(sizeof(char *) * (n + 1)); // +1 pour NULL final
    if (!clone)
        return NULL;

    int i;
    for (i = 0; i < n && arr[i] != NULL; i++)
    {
        clone[i] = str_duplicate(arr[i]);
        if (!clone[i])
        { // Gestion d'erreur en cas d'échec d'allocation
            for (int j = 0; j < i; j++)
            {
                free(clone[j]);
            }
            free(clone);
            return NULL;
        }
    }

    clone[i] = NULL; // Ajouter le pointeur NULL final
    return clone;
}
