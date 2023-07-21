#include "main.h"

/**
 * print_line - takes a parameter
 * @n: parameter
 * Description: this function takes a parameter @n and print
 * a line according to number given in the parameter
 * Return: void
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
