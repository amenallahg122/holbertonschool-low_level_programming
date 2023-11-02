#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks if c is a number
 * @c: The character to be checked
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
