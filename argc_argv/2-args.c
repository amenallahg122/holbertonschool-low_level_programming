#include <stdio.h>
/**
* main - entry point
* @argc: int
* @argv: array
* Return: 0
*/
int main(int argc, char **argv)
{
	(void)argc;
	int i = 0;

	while (i >= 0)
		printf("%s\n", argv[i]);
	return (0);
}
