#include "main.h"
#include <stdio.h>

/**
 * print_numbers -  prints numbers from 0 to 9
 * Return: Always  (Success)
 */

void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}

	putchar('\n');
}
