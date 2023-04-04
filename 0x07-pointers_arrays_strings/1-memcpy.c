#include "main"
/**
* _memcpy - copy memory area.
* @dest: copied
* @src: original
* @n: limit
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
