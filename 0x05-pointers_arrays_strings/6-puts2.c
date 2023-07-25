#include "main.h"

void puts2(char *str) {
    if (str == NULL)
        return;

    int i = 0;
    while (str[i] != '\0') {
        printf("%c", str[i]);
        i += 2; // Move to the next even index
    }
    printf("\n");
}

