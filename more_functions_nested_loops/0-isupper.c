#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks if a character is in uppercase
 * @c: The character to be checked
 * Return: Always .
 */

int _isupper(int c)
{
	if (c >= 97 && c <= 122)
		return (0);
	else
		return (1);
}
