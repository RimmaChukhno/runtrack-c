#ifndef MANHATTAN_H
#define MANHATTAN_H

// Structure représentant un point
typedef struct {
    int x;
    int y;
} point;

// Macro ABS pour valeur absolue
#define ABS(x) ((x) < 0 ? -(x) : (x))

// Prototype de la fonction
int manhattan(point a, point b);

#endif
