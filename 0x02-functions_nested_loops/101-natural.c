#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out the addition of natural number
 * Description: prints out the addition of natural number under 1024
 * Return: returns void
 */

int main(void)
{
	int num = 0;
	int total = 0;

	while (num < 1024)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			total += num;
		}
		num++;
	}
	printf("%i\n", total);
	return (0);
}


