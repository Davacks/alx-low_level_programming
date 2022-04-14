#include "main.h"

/**
 * print_triangle - check for a digit
 * @size : integer type
 * Return:void
 */

void print_triangle(int size)
{

	int i = 1, aa;

	while (i <= size && size > 0)
	{
		aa = 0;
		while (aa < size - 1)
		{
			_putchar(' ');
			aa++;
		}
		aa = 0;
		while (aa < i)
		{
			_putchar('#');
			aa++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
