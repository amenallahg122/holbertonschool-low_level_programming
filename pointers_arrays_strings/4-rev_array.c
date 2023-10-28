#include "main.h"

/**
 * reverse_array - reverses array
 * @a: array
 * @n: size
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (int i = 0; i < n / 2; i++)
	{
		int temp = a[i];

		a[i] = a[n - 1 - i];

		a[n - 1 - i] = temp;
	}
}
