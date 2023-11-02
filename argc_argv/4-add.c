#include <stdio.h>
#include <stdlib.h>
/**
 *isnumber - check if number
 * @argc : int
 * @argv : str
 * Return: 0 or 1
 */
int isnumber(int argc, char **argv)
{
	int a;
	int b;

	for (a = 1; a < argc; a++)
	{
		b = 0;
		while (argv[a][b] != '\0')
		{
			if ((argv[a][b] < 47) || (argv[a][b] > 58))
			{
				return (0);
			}
			b++;
		}
	}
	return (1);
}
/**
 * main - Entry point
 * @argc : int
 * @argv : str
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (isnumber(argc, argv) == 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
