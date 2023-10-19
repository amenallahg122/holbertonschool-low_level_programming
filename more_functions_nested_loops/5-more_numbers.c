#include "main.h"
#include <stdio.h>
/**
 * more_numbers -  prints from 0to 14, ten times
 * Return: Always  (Success)
 */

void more_numbers(void)
{
	int a;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (a = 0 ; a <= 14 ; a++)
		{
			if (a > 9)
			{
				putchar((a / 10) + '0');
			}
			putchar((a % 10) + '0');
		}
		putchar('\n');
	}
}
