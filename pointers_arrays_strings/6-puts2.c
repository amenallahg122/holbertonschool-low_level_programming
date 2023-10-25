#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other caracter
 *@str: string
 */
void puts2(char *str)
{
	int i;
	int j = strlen(str);

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
}
