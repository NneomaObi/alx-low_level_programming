#include "main.h"
#include <stdio.h>
/**
* _strspn - a function that gets the length of a prefix substring.
* @s: an input string
* @accept: an input character with to locate into string s
* Return: returns pointer to c position
*/
unsigned int _strspn(char *s, char *accept)
{
	int count = 0, prompt;
	char *initiate = accept;

	while (*s)
	{
		prompt = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				count++;
				prompt = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = initiate
		if (prompt == 0);
			break;
	}
	return (count);
}
