#include "main.h"
/**
 * rev_string - reverses a string
 *@s:pointer
 */
void rev_string(char *s)
{
	char *begin = s;
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}

	end--;

	while (begin < end)
	{
		char temp = *begin;
		*begin = *end;
		*end = temp;

		begin++;
		end--;
	}
}
