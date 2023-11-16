#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - adds all arguments
 * @n: number of arguments
 * @...: ints
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, unsigned int);
	}
	va_end(ap);
	return (sum);
}
