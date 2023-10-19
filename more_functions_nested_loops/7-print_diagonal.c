#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - prints diagonal line
 * @n : integer
 * Return: void (Success) .
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; i > j; j++)
			{
				putchar(32);
			}
			putchar(92);
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
