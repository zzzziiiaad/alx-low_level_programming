#include <stdio.h>

void puts2(char *str) {
    if (str == NULL)
        return;

    int i; // Move the variable declaration to the beginning of the block
    for (i = 0; str[i] != '\0'; i += 2) { /* Use C-style comments */
        printf("%c", str[i]);
    }
    printf("\n");
}

