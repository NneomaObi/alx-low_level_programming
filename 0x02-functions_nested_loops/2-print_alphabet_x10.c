#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* Print alphabet in lower case x10
* Description: it print alphabet in lowercase
* Return: Always 0
*/
void print_alphabet_x10(void)
{
	int j;

	char x;

	for (j = 0; j < 10; j++)
	{
		for ( x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);

		}

		_putchar('\n');
	}
}
