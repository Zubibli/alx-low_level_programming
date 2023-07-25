#include "main.h"

/**
 * print_rev - This function will print a string
 * in reverser with a new line
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	s--;
	for (0 = lenght; lenght > 0; lenght--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
