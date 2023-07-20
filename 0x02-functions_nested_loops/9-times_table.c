#include "main.h"
#include <stdio.h>

/**
 * times_table - function display a time tabele
 * Description: This function prints out a 9 times table
 * Return: returns void
 */

void times_table(void)
{
	int num1 = 0;
	int num2;

	while (num1 <= 9)
	{
		num2 = 0;
		while (num2 <= 9)
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
					printf(", %i", multiply);
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
