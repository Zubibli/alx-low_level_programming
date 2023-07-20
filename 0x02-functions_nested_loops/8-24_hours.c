#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - this function prints out time
 * Description: This function prints out time for
 * 00:00 - 23-59
 * Return: returns void
 */

void jack_bauer(void)
{
	int hours = 0;
	int seconds = 0;

	while (hours < 24)
	{
		seconds = 0;
		while (seconds < 60)
		{
			if (hours < 10)
			{
				printf("0");
				printf("%i", hours);
			}
			else
			{
				printf("%i", hours);
			}

			printf(":");

			if (seconds < 10)
			{
				printf("0");
				printf("%i", seconds);
			}
			else
			{
				printf("%i", seconds);
			}
			printf("\n");
			seconds++;
		}
		hours++;
	}
}
