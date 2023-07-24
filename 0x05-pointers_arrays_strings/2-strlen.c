#include "main.h"

/**
 * _strlen - this function will  return the length of a string
 * @s: string
 *
 * return: length
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
