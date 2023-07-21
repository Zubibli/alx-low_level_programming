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
	int i;
	
	for (i = 48; i <= 57; i++)
		_putchar(i);
	_putchar('\n');
}
