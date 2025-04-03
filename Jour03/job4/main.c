#include <unistd.h>
#include "my_sqrt.h"

// Fonction pour afficher un entier (sans printf)
void my_putnbr(int n)
{
    char buffer[12]; // Stocker l'entier converti en string (int max ≈ 10 chiffres + signe)
    int i = 0;

    if (n == 0)
    {
        write(1, "0", 1);
        return;
    }

    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }

    while (n > 0)
    {
        buffer[i++] = '0' + (n % 10);
        n /= 10;
    }

    while (i--)
    {
        write(1, &buffer[i], 1);
    }
}

void test_my_sqrt(int n)
{
    int result = my_sqrt(n);
    my_putnbr(result);
    write(1, "\n", 1);
}

int main()
{
    test_my_sqrt(0);   // √0 = 0
    test_my_sqrt(1);   // √1 = 1
    test_my_sqrt(4);   // √4 = 2
    test_my_sqrt(9);   // √9 = 3
    test_my_sqrt(16);  // √16 = 4
    test_my_sqrt(25);  // √25 = 5
    test_my_sqrt(26);  // Pas un carré parfait → 0
    test_my_sqrt(100); // √100 = 10
    test_my_sqrt(101); // Pas un carré parfait → 0
    test_my_sqrt(-4);  // Nombre négatif → 0

    return 0;
}
