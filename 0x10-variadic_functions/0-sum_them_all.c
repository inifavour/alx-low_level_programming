#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *sum them all - function that returns sum of all its parameters
 *@n: number of arguments
 *Return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ptr;
	va_start(ptr, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);

	return (sum);
}
