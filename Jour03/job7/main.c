#include <unistd.h>
#include <stdlib.h> // Ajout de cette ligne pour utiliser free
#include "itoa_hex.h"

// Fonction pour afficher une chaîne avec write
void my_putstr(const char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
}

int main()
{
    int numbers[] = {0, 255, 4095, 123456, 0xABCDEF}; // Exemples de nombres à convertir
    for (int i = 0; i < 5; i++)
    {
        char *hex_str = itoa_hex(numbers[i]);
        if (hex_str)
        {
            my_putstr(hex_str);
            write(1, "\n", 1);
            free(hex_str); // Libérer la mémoire après usage
        }
    }

    return 0;
}
