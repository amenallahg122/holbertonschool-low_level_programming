#include "main.h"

/**
 * more_numbers -  prints from 0to 14, ten times
 * Return: Always  (Success)
 */

void more_numbers(void)
{
	char a;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (a = '0'; a <= '14'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}