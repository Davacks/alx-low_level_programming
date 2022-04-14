#include "main.h"

/**
 * print_diagonal - check for a digit
 * @n : number of \\ to be printed
 * Return:void
 */

void print_diagonal(int n)
{

	int i = 0, aa;

	while (i < n && n > 0)
	{
		aa = 0;
		while (aa < i)
		{
			_putchar(' ');
			aa++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');

}
