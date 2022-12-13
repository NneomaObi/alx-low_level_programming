#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - check the code
*
* Return - Always 0
*/

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}

	_putchar('\n');

	return (0);
}
