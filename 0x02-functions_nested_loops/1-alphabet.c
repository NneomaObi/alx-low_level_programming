#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* Print_alphabet - Description
* Description: prints alphabet in lowercase
* Return - Always 0
*/

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);

	_putchar('\n');
}
