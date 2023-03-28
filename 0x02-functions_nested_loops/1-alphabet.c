#include "main.h"
/**
 * main - Entry Point
  *Description: Prints the alphabet in lowercase followed by a new line
 *
 *Return: 0
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
