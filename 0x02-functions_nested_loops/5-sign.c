#include <stdio.h>
#include "main.h"

/**
 * print_sign - Prototype function
 * Description: This function takes a parameter then evaluates it
 * @n: parametr to be evaluated
 * Return: returns a value of 1,-1 or 0
 */

int print_sign(int n)
{
	int answer = 0;

	if (n > 0)
	{
		_putchar('+');
		answer = 1;

	}
	if (n < 0)
	{
		_putchar('-');
		answer = -1;
	}
	return (answer);

