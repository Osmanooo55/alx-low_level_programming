#include "main.h"

/**
 * factorial - calculate the factorial of a given integer
 * @n: number ti calculate its factorial
 *
 * Return: factorial of n - integer
 */
int factorial(int n)
{
	int res;

	if (n >= 0)
	{
		if (n == 0)
			res = 1;
		else
			res = n * factorial(n - 1);
	}
	else
		res = -1;
	return (res);
}
