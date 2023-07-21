#include "main.h"

/**
 * print_triangle - takes a parameter
 * @size: parameter
 * Description: Where @size is the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, no = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < no)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			no--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
