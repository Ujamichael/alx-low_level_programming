#include "function_pointers.h"
/**
 * print_name - function
 * @name: name
 * @f : pointed function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
