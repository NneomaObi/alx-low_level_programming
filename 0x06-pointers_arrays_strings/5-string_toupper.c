#include "main.h"
/**
* string_toupper - a function that changes all lowercase letters of a  string
* to upper case
* @s: an input string
*  Return: char pointer to converted string
*/
char *string_toupper(char *)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			c[i] -= 32;
		}
	}
	return (c);
}
