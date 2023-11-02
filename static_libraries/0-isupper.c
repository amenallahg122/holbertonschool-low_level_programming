#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks if a character is in uppercase
 * @c: The character to be checked
 * Return: Always 0.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
