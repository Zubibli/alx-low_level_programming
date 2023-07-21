#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints numbers
 * Description: This function prints out number
 * from 0 - 14 multiple times
 * Return: void
 */

void more_numbers(void)
{
	int times;

	for (times = 0; times < 10; times++)
	{
		int number = 0;

		while (number <= 14)
		{
			if (number > 9)
			{
				_putchar(number / 10 + '0'0);
			}
			_putchar(number % 10 + '0'0);
		}
		_putchar('\n');
	}
}
