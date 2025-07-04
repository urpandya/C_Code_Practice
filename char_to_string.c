#include <stdio.h>

int main() {
    char c = 'A';
    char str[2]; // 1 for char, 1 for null terminator

    str[0] = c;
    str[1] = '\0'; // Null-terminate the string

    printf("Char: %c\n", c);
    printf("String: %s\n", str);

    return 0;
}