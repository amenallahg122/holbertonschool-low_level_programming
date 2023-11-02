#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 *
 * @argc: int
 * @argv: string
 *
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int a, b, diff;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	diff = a * b;

	printf("%i\n", diff);

	return (0);
}
