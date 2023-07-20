#include "main.h"

/**
 * print_alphabet - prototype function
 * Description: This prints out alphabet from a-z
 * in lower case
 * Return: this returns void
 */

void pint_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
