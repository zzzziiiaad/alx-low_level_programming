/*#include "main.h"

void puts2(char *str);
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}*/

#include <stdio.h>

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

