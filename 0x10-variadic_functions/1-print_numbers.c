#include "variadic_functions.h"
#include <stdarg.h>
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
	unsigned int count;
	va_list my_nums;

	va_start(my_nums, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(my_nums, unsigned int));
		if (count < (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	va_end(my_nums);
	printf("\n");
}
