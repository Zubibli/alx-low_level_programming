#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 * Description: This function prints out number
 * from 0 - 9
 * Return: void
 */

void print_numbers(void)
{
	int number = 0;

	while (number <= 9)
	{
		_putchar('0' + number);
		number++;
	}
	_putchar('\n');
}
