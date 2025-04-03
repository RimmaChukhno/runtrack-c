#include <stdio.h>
#include "sudoku_solver.h"

// Fonction pour afficher la grille de Sudoku
void print_grid(int grid[9][9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf("%d ", grid[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int grid[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}};

    printf("Grille de Sudoku avant resolution :\n");
    print_grid(grid);

    if (sudoku_solver(grid))
    {
        printf("\nGrille de Sudoku apres resolution :\n");
        print_grid(grid);
    }
    else
    {
        printf("\nAucune solution possible\n");
    }

    return 0;
}
