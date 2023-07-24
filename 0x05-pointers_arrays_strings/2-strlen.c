#include "main.h"

/**
 * _strlen - this function will  return the length of a string
 * Description: it  checks if the paameter return the length of a string
 * @s: input string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
