#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		char chre = 'a';

		for (; chre <= 'z'; chre++)
		{
			_putchar(chre);
		}
		_putchar('\n');

		i++;
	}
}
