#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * sum_them_all -  sum of all its paramters.
 * @n: number of paramters passed to the function.
 * @...: variable number of paramters to calculate the sum of.
 * Return: If n == 0 - 0.
 *   || - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list agg;
	unsigned int i, sum = 0;

	va_start(agg, n);

	for (i = 0; i < n; i++)
		sum += va_arg(agg, const unsigned int);

	va_end(agg);

	return (sum);
}
