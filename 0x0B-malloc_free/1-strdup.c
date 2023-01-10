#include "main.h"
#include <stdlib.h>
/**
* _strdup - A function that returns a pointer to a newly allocated
* space in memory, which contains a copy of the string given as a
* parameter.
* @str: An input pointer of the string to copy.
* Return: Apointer to new string or NULL if it str is NULL
*/
char *_strdup(char *str)
{
	char *new_str, *start;
	int j = 0, len = 0;

	if (str == NULL)
		return (NULL);

	start = str;

	while (*str)
	{
		len++;
		str++;
	}

	str = start;
	new_str = malloc(sizeof(char) * (len + 1));
	start = new_str;

	if (new_str != NULL)
	{
		for (; j < len; i++)
		{
			new_str[j] = *str;
			str++;
		}
		new_str[j] = '\0';
		return (start);
	}
	else
		return (NULL);
}
