#include "main.h"

/**
 * print_square - check for a digit
 * @n : number of _ to be printed
 * Return:void
 */

void print_square(int n)
{

	int i = 0, aa;

	while (i < n && n > 0)
	{
		aa = 0;
		while (aa < n)
		{
			_putchar('#');
			aa++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}
