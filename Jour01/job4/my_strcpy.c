char *my_strcpy(char *dest, const char *src) {
    char *ptr = dest; // Sauvegarde l'adresse de départ de dest

    while (*src) {  // Tant que src n'est pas '\0'
        *dest = *src; // Copie le caractère de src vers dest
        dest++;
        src++;
    }
    *dest = '\0'; // Ajoute le caractère de fin de chaîne

    return ptr; // Retourne le pointeur de départ de dest
}
