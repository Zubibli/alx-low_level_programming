#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_times_table - takes a parameter
 * @n: parameter to make use
 * Description: Takes the parameter and prints out
 * the multiplication table of the parameter
 * Return: returns void
 */

void print_times_table(int n)
{
	int num1 = 0;
	int num2;

	if (n <= 15 && n>= 0)
	{
		while (num1 <= n)
		{
			num2 = 0;
			while (num2 <= n)
			{
				int multiply = num1 * num2;
				
				if (num2 > 0)
				{
					if (multiply < 10)
					{
						printf(", %i", multiply);
					}
					else
					{
						if (multiply < 100)
						{
							printf(", %i", multiply);
						}
						else
						{
							printf(", %i", multiply);
						}
					}
				}
				else
				{
					printf("%i", multiply);
				}
				num2++;
			}
			printf("\n");
			num1++;
		}
	}
}
