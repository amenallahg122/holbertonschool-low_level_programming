#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - Prints from 0 to 9 except 2 and 4
 *
 * Return: Always (Success)
 */

void print_most_numbers(void)
{
	char a;

	for (a = '0'; a <= '9' ; a++)
		if (a != '2' && a != '4')
	{
			putchar(a);
	}
	putchar('\n');
}
