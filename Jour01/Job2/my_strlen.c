int my_strlen(const char *str) {
    int length = 0;
    while (str[length] != '\0') { // Parcourt la cha�ne jusqu'� trouver '\0'
        length++;
    }
    return length; // Retourne la longueur de la cha�ne
}
