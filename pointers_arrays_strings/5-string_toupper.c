#include "main.h"
/**
 * *string_toupper - replaces lower case with uppercase
 * @str: string
 * Return: string
 */
char *string_toupper(char *str)
{
	int a = 0;

	while (str[a])
	{
		if (str[a] >= 97 && str[a] <= 122)
		{
			str[a] -= 32;
		}

		a++;
	}

	return (str);
}
