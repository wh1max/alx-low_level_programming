#include "main.h"
/**
 *main - Entry point
 *Description: A fuction that prints  10 times the alphabet, in lowercase, followed by a new line.
 *
 *Return: 0
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
