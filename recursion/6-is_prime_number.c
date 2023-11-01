#include "main.h"
/**
 * check - checks
 * @n: integer
 * @i: integer
 * Return: integer
 */
int check(int n, int i)
{
	if (n % i == 0 && i != n)
		return (0);
	if (i == n)
		return (1);
	else
		return (check(n, i + 1));
}

/**
 * is_prime_number - checks if the number is a prime number or not
 * @n: integer
 * Return: integer
 */

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}

	else if (check(n, 2))
		return (1);
	else
		return (0);
}
