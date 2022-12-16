#include "main.h"

/**
* print_diagonal - a function that draws a diagonal line on the terminal.
* @n: An input integer
* Return: Always 0
*/

void print_diagonal(int n)
{
	int i = 0, x;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (x = 0; x < i; x++)
				_putchar(' ');

		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
