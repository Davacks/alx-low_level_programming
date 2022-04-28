#include "main.h"

/**
 * factorial - finds the factorial of a number
 * @n: input integer variable
 * Return: -1 if less than 0
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	if (n == 0)
		return (1);
	else
		return (-1);
}
