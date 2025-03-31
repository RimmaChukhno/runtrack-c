int char_is_digit(char c);  // Déclaration de la fonction

int str_is_digit(const char *str) {
    if (!str || *str == '\0') return 0; // Vérifie si la chaîne est vide

    while (*str) {
        if (!char_is_digit(*str)) return 0; // Si un caractère n'est pas un chiffre, retourne 0
        str++;
    }
    return 1; // Si tous les caractères sont des chiffres, retourne 1
}
