#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 *
 * Return: Always (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a' ; alphabet--)
	{
	putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
