#include "main.h"
/**
 * _strlen - returns length of string
 * @s: string
 * Return: i
 */
int _strlen(char *s)
{
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
