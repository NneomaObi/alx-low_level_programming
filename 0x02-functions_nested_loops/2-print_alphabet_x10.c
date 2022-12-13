#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* print_alphabet_x10 - Description
* Description: It prints alphabet in lowercase ten times
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
