#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints if last digit of number = 0, <5 or >6 and =!0
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10
	if (x > 5)
	{
	printf("Last digit of ", n "is greater than 5")
	}
	else if (x == 0)
	{
	printf("Last digit of ", n "is 0")
	}
	else
	{
	printf("Last digit of ", n "is less than 6 and not 0")
	}
	return (0);
}
