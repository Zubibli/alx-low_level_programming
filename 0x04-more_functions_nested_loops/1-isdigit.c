#include "main.h"
#include <ctype.h>

/**
 * _isdigit - takes a parameter
 * @c: parameter
 * Description: This function takes a parameter @c
 * and checks if it is digit or not
 * Return: 1 or 0 depending on the evaluation
 */

int _isdigit(int c)
{
	int result = 0;

	if (isdigit(c))
	{
		result = 1;
	}
	return (result);
