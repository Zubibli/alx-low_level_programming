#include "main.h"
#include <ctype.h>

/**
 * _isalpha - This function checks for alphabet
 * Description: This function checks whether the parameter given
 * is alphabet or not
 * @c: The parameter is to be evaluated
 * Return: This function returns 0 or 1
 */

int _isalpha(int c)
{
	int answer = 0;

	if (isalpha(c))
	{
		answer = 1;
	}
	return (answer);
}
