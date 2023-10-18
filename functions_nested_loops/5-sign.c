#include "main.h"

/**
 * print_sign -  prints sign of number
 * Return: Always (Success)
 */

int _print_sign(int n)
{
	if (0 > n)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(45);
		return (0);
	}
	else
	{
		_putchar(48);
		return (-1);
	}
}
