#include <stdio.h>
/**
  *main - prints numbers of base 16 in lowercase
  *Return: 0
*/
int main(void)
{
	int n;

	for (n = 0; n <= 15; n++)
	{
		printf("%x", n);
	}
	printf("\n");
	return (0);
}
