#include "main.h"

/**
* print_square - Write a function that prints a square
* followed by a new line.
* @size: An input integer
* Return: Always 0
*/
void print_square(int size)
{
	int i, x;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < i; x++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
