#include "main.h"
/**
 * check - finds the square root of a number
 * @a: integer
 * @b: integer
 * Return: square root of n
 */
int check(int a, int b)
{
	if (b * b > a)
		return (-1);

	else if (b * b == a)
		return (b);

	else
		return (check(a, b + 1));

	return (1);
}

/**
 * _sqrt_recursion - returns square root of a number
 * @n: integer
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (check(n, 1));
}
