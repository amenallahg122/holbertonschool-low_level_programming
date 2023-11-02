#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds two numbers
 *
 * @argc: int
 * @argv: string
 *
 * Return: 0 or 1
 */

int main(int argc, char **argv)
{
	int a, b, diff;

	if ((a >= 48 && a <= 57)&&(b >= 48 && b <= 57))
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	diff = a + b;

	printf("%i\n", diff);

	return (0);
}
