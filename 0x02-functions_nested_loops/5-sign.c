#include "main.h"
/**
* print_sign
* @n: An input numb
* Description: function prints the sign of a number
* Return: 1 if number is positive, o if number is 0, or
* -1 if number is negative
*/

int print_sign(int n)
{
	int sign = 0;

	if (n > 0)
	{
		sign = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		sign = 0;
		_putchar('0');
	}
	else
	{
		sign = -1;
		_putchar('-');
	}

	return (sign);

}
