#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return -1;
	if (n == 0 || n == 1)
		return n;

	 while (i * i < n)
		i++;

	if (i * i == n)
		return i;

	return -1;
}
