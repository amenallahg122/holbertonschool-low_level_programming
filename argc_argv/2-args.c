#include <stdio.h>
/**
* main - entry point
* @argc: int
* @argv: array
* Return: 0
*/
int main(int argc, char **argv)
{
	int i;
	(void)argc;

	i = 0;
	while (i >= 0)
		printf("%s\n", argv[i]);
		i++;
	return (0);
}
