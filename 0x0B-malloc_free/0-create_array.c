#include "main.h"
#include <stdlib.h>
/**
 * create_array - entry point
 * @size: size of character
 * @c: character
 * Return: char else NULL
 */
char *create_array(unsigned int size, char c)
{
	char *arra;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	arra = (char *)malloc(size * sizeof(char));
	if (arra != NULL)
	{
		for (i = 0; i < size; i++)
		{
			arra[i] = c;
		}
		return (arra);
	}
	else
	{
		return (NULL);
	}
}
