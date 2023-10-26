#include "main.h"
/**
 * _strcpy - copies
 * @dest: destination
 * @src: source
 * Return: a copie
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
