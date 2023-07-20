#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * print_last_digit - function prints las digit
 * Description: This prints out the last digit of the given parameter
 * @n: The parameter
 * Return: returns the last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		if (n == INT_MIN)
		{
			int digit = abs((n - 1));
			int last_digit = (digit % 10) + 1;

			_putchar('0' + last_digit);
			return (last_digit);
		}
		else
		{
			int digit = abs(n);
			int last_digit = (digit % 10);

			_putchar('0' + last_digit);
			return (last_digit);
		}
	}
	else
	{
		int last_digit = n % 10;

		_putchar('0' + last_digit);
		return (last_digit);
	}
}
