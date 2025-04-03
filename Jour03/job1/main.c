#include <unistd.h>
#include "my_atoi.h"

// Fonction pour afficher un entier (pour tester)
void my_putnbr(int n)
{
    char buffer[12]; // Pour stocker l'entier converti en string (int max ≈ 10 chiffres + signe)
    int i = 0;

    if (n == 0)
    {
        write(1, "0", 1);
        return;
    }

    // Gérer le signe
    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }

    // Convertir en chaîne (chiffres à l'envers)
    while (n > 0)
    {
        buffer[i++] = '0' + (n % 10);
        n /= 10;
    }

    // Afficher les chiffres dans le bon ordre
    while (i--)
    {
        write(1, &buffer[i], 1);
    }
}

int main()
{
    char *test1 = "   42";
    char *test2 = "-12345";
    char *test3 = "+987";
    char *test4 = "  00123";
    char *test5 = "abc42"; // Devrait retourner 0

    my_putnbr(my_atoi(test1));
    write(1, "\n", 1);

    my_putnbr(my_atoi(test2));
    write(1, "\n", 1);

    my_putnbr(my_atoi(test3));
    write(1, "\n", 1);

    my_putnbr(my_atoi(test4));
    write(1, "\n", 1);

    my_putnbr(my_atoi(test5));
    write(1, "\n", 1);

    return 0;
}
