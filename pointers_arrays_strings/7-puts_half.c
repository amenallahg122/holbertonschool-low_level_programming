#include "main.h"
#include <string.h>
/**
 * puts_half - prints ehalf
 *@str: string
 */
void puts_half(char *str)
{
	int i;
	int j = strlen(str);

	if (j % 2 == 0)
	{	
		for (i = j / 2; i < j; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		for (i = ((j - 1) / 2) + 1; i < j; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
