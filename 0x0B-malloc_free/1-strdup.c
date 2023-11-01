#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - entry point
 * @str: original string to be copied
 * Return: copid string
 */
char *_strdup(char *str)
{
	size_t i, len;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	copy = (char *)malloc(len + 1);
	if (copy != NULL)
	{
		for (i = 0; i <= len; i++)
		{
			copy[i] = str[i];
		}
		return (copy);
	}
	else
	{
		return (NULL);
	}
}
