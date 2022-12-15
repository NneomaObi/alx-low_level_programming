#include "main.h"
/**
* _isdigit - A function that checks for a digit (0 through 9).
* @c: An input integer
* Return: 1 if c is a digit or 0 otherwise
*/
int _isdigit(int c)
{
	char x;
	int checkdigit =0;

	for (x = '0'; x <= '9'; x++)
	{
		if (x == c)
		{
			checkdigit = 1;
			break;
		}
	}

	return (checkdigit);
}
