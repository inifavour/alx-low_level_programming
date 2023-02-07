#include "main.h"
#include <stdio.h>

/**
 * main - main
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int n;

	n = binary_to_uint("56");
	printf("%u\n", n);
	n = binary_to_uint("101");
	printf("%u\n", n);
	n = binary_to_uint("10001101");
	printf("%u\n", n);
	return (0);
}
