#include "main.h"
#include <stdio.h>
/**
* _puts - Write a function that prints a string, followed
* by a new line, to stdout.
* @str: an input string
* Return: Nothing
*/
void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		putchar(str[x]);
		x++;
	}
	putchar('\n');
}
