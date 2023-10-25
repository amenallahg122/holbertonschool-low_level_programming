#include "main.h"
/**
 * puts2 - prints every other caracter
 *@str: string
 */
void puts2(char *str)
{
	int i;

	for (int i = 0; i < strlen(str); i += 2)
	{
		putchar(str[i]);
	}
}
