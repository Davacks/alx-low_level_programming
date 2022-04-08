#include <stdio.h>
/**
 * main - print the alphabet in lowercase letters in revers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{ 
		putchar(c);
		c--;
	}

	putchar('\n');

	return (0);
}

