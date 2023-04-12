#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Entry point
 *@str: string we need to duplicate
 * Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	unsigned int len = 0;
	unsigned int i;
	char *dup_str = (char*) malloc((len + 1) * sizeof(char));

	while (str[len] != '\0')
	{
		len++;
	}
	if (dup_str == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		dup_str[i] = str[i];
	}
	return (dup_str);

}
