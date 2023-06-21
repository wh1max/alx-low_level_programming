#include "function_pointers.h"
#include <stddef.h>
/**
* print_name- This function prints a name.
*
* @name: string to print.
* @f: this a function pointer, that recieves a string.
*
* Return: No return because this is a void function.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
