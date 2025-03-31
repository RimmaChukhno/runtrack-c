void my_putchar(char c);

void my_putstr(const char *str) {
    while (*str) {
        my_putchar(*str);
        str++;
    }
}
