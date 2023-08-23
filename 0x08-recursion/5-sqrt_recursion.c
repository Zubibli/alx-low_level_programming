#include "main.h"
int _sqrt(int preve, int root);

/**
 * _sqrt_recursion - function
 * @n: parameter
 * Return: not a natural sqrt -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(1, n));
}

/**
 * _sqrt - function
 * @prev: parameter
 * @root: parameter
 * Return: -1 or @prev
 */

int _sqrt(int prev, int root)
{
	if (prev > root)
		return (-1);
	else if (prev * prev == root)
		return (prev);
	return (_sqrt(prev + 1, root));
}
