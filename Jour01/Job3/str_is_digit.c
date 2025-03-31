int char_is_digit(char c);  // D�claration de la fonction

int str_is_digit(const char *str) {
    if (!str || *str == '\0') return 0; // V�rifie si la cha�ne est vide

    while (*str) {
        if (!char_is_digit(*str)) return 0; // Si un caract�re n'est pas un chiffre, retourne 0
        str++;
    }
    return 1; // Si tous les caract�res sont des chiffres, retourne 1
}
