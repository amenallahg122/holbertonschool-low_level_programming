#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: a string.
 */
char *str_concat(char *s1, char *s2)
{
	char *ch;
	unsigned int i, j;
	unsigned int l1 = 0;
	unsigned int l2 = 0;

	if (s1 != NULL)
	{
		l1 = strlen(s1);
	}
	if (s2 != NULL)
	{
		l2 = strlen(s2);
	}
	ch = (char *)malloc((l1 + l2 + 1) * sizeof(char));
	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)
		ch[i] = s1[i];

	for (j = 0; j < l2; j++)
	{
		ch[i] = s2[j];
	}

	ch[i] = '\0';
	return (ch);
}
