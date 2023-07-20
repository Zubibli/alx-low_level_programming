#include "main.h"

/**
 * print_alphabet_x10 - this function
 * Description: This prints out a-z lower case
 * and also in multiple of 10
 * Returns: retuns void
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
