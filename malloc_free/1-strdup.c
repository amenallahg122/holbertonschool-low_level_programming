#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - duplicates string
 * @str: string
 * Return: string
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i;
	int n;

	if (str == NULL)
	{
		return (NULL);
	}
	n = strlen(str);
	s = malloc((n + 1) * sizeof(char));
	if (s != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			s[i] = str[i];
	}
	else
	{
		return (NULL);
	}
	s[i] = '\0';
	return (s);
}
