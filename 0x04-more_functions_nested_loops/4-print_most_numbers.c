#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print numbers
 * Description: This function prints out number
 * from 0 - 9 except for 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int number = 0;

	while (number <= 9)
	{
		if (number != '2' && number != '4')
		{
			_putchar('0' + number);
		}
		number++;
	}
	_putchar('\n');
}
