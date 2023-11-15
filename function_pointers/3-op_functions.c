#include "function_pointers.h"
#include "3-calc.h"
/**
 * op_add - adds 2 ints
 * @a: int 1
 * @b: int 2
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: int 1
 * @b: int 2
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: int 1
 * @b: int 2
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -  divides a by b
 * @a: int 1
 * @b: int 2
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - rest
 * @a: int 1
 * @b: int 2
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
