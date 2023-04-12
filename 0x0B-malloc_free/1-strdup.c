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
	int n = 0;
	int i;
	char *dup_str = (char *) malloc((n + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[n] != '\0')
	{
		n++;
	}
	if (dup_str != NULL)
	{
		for (i = 0; i <= n; i++)
		{
			dup_str[1] = str[i];
		}
	}
	else
	{
		return (NULL);
	}
	return (dup_str);
}
