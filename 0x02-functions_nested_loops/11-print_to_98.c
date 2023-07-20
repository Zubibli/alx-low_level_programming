#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - prints out a certain number
 * @num:a parameter to determine increament or decrement
 * Description: This print out a value by incrementing it from @num to 98 if
 * @num is lower than 98
 * if greater it prints a value by decreasing it from @num down to 98
 * Return: returns void;
 */

void print_to_98(int num)
{
	int number = num;

	if (num < 98)
	{
		while (number <= 98)
		{
			if (number == 98)
			{
				printf("%i", number);
			}
			else
			{
				printf("%i, ", number);
			}
			number++;
		}
	}
	else
	{
		while (number >= 98)
		{
			if (number == 98)
			{
				printf("%i", number);
			}
			else
			{
				printf("%i, ", number);
			}
			number--;
		}
	}
	printf("\n");
}
