#include "main.h"
#include <stdio.h>
/**
* print_triangle -  a function that prints a triangle, followed by a new line.
* @size: An input integer
* Return: Always 0
*/
void print_triangle(int size)
{
	int x, j, n = size -1;
	
	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
