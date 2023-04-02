#include "main.h"


void _puts(char *str)
{
	int index = 0;
	while (index != '\0')
	{
		_putchar (str[index]);
		index++;
	}
	_putchar('\n');
}
