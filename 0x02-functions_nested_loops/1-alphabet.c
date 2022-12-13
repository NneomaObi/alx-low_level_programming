#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*Print alphabet - lowercase
*
* Return - Always 0
*/

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);

	_putchar('\n');
}
