#include <stdio.h>
#include "manhattan.h"

int main() {
    point p1 = {2, 3};
    point p2 = {5, 1};

    int dist = manhattan(p1, p2);
    printf("Distance de Manhattan : %d\n", dist); // Résultat attendu : 5

    return 0;
}
