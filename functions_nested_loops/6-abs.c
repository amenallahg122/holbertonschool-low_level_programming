#include "main.h"

/**
 * int _abs - computes the absolute value of an int
 * @n: number
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n >= 0)
	{
		_putchar(n);
	}
	else
	{
		_putchar(-n);
	}
}