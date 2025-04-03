#include "sudoku_solver.h"

// Vérifie si un nombre peut être placé à une position donnée dans la grille
int is_safe(int grid[9][9], int row, int col, int num) {
    // Vérifier la ligne
    for (int i = 0; i < 9; i++) {
        if (grid[row][i] == num) {
            return 0;
        }
    }

    // Vérifier la colonne
    for (int i = 0; i < 9; i++) {
        if (grid[i][col] == num) {
            return 0;
        }
    }

    // Vérifier le sous-grille 3x3
    int start_row = row - row % 3;
    int start_col = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + start_row][j + start_col] == num) {
                return 0;
            }
        }
    }

    // Si aucune contrainte n'est violée, c'est sûr
    return 1;
}

// Résout le Sudoku en utilisant le backtracking
int sudoku_solver(int grid[9][9]) {
    int row, col;

    // Chercher une case vide
    int found_empty = 0;
    for (row = 0; row < 9; row++) {
        for (col = 0; col < 9; col++) {
            if (grid[row][col] == 0) {
                found_empty = 1;
                break;
            }
        }
        if (found_empty) break;
    }

    // Si aucune case vide n'a été trouvée, la grille est complète
    if (!found_empty) {
        return 1; // Sudoku résolu
    }

    // Tester les chiffres de 1 à 9 dans la case vide
    for (int num = 1; num <= 9; num++) {
        if (is_safe(grid, row, col, num)) {
            grid[row][col] = num;

            // Recursion : tenter de résoudre avec ce numéro placé
            if (sudoku_solver(grid)) {
                return 1; // Solution trouvée
            }

            // Si cela échoue, annuler et essayer un autre numéro
            grid[row][col] = 0;
        }
    }

    return 0; // Pas de solution possible
}
