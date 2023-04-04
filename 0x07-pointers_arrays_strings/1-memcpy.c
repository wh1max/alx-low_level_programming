#include "main.h"
/**
* _memset - fill memory .
* @s: pointer
* @b: hexadecimal number
* @n: n bytes
* Return: pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *b = src;
	char *a = dest;

	while (n != 0)
	{
		*a++ = *b++;
		n--;
	}
	return (dest);
}
