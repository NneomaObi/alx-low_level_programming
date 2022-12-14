#include "main.h"

/**
* times_table - Descriptiom
* Description: It prints 9 times table starting with 0
* Return: Nothing
*/

void times_table(void)
{
	int iRow, iColumn, iTableValue;

	int n = 9;

	for (iColumn = 1; iColumn <= n; iColumn++)
	{
		_putchar(iColumn);

		for (iRow = 1; iRow <= n; iRow++)
		{
			_putchar(iRow);

			for (iColumn = 1; iColumn <= n; iColumn++)
			{
				iTableValue = iRow * iColumn;
				_putchar(iTableValue);
			}
		}
	}

	return (0);
}
