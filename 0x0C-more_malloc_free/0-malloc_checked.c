#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - entry point
 * @b: variable
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *var = malloc(b);

	if (var == NULL)
	{
		exit(98);
	}
	return (var);
}
