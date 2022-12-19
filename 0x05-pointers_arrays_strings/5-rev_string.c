#include "main.h"
#include <stdio.h>
/**
* rev_string - a function that reverse a string
* followed by a new line.
* @s: an input string
* Return: Nothing
*/
void rev_string(char *s)
{
	int len = 0, x = 0;

	char rev;

	while (s[len] != '\0')
	{
		len++;
	}
	while (x < len--)
	{
		rev = s[x];
		s[x++] = s[len];
		s[len] = rev;
	}
}
