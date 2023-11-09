#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - fuction that concats two strings
 * @s1: string 1
 * @s2: string 2
 * @n: n
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, a, b;

	a = b = 0;

	if (s1)
		for (; s1[a]; )
			a++;
	if (s2)
		for (; s2[b]; )
			b++;
	if (n < b)
		b = n;
	str = malloc(sizeof(char) * (a + b) + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < (a + b); i++)
	{
		if (i < a)
			str[i] = s1[i];
		else
			str[i] = s2[i - a];
	}
	str[i] = '\0';
	return (str);
}
