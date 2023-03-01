#include "stdarg.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers.
 * @n: resepresents the number of arguments
 * @separator: resepresents the seperator b/w the numbers
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	i = 0;

	while (i < n)
	{
		printf("%d", va_arg(args, unsigned int));
		if (seperator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
		va_end(args);
		printf("\n");
}
