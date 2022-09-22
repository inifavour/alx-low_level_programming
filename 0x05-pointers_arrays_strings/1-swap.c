#include "main.h"

/**
 * swap_int - this swaps the value of two integers
 * @a - parameter 'a' to be swaped
 * @b - parameter 'b' to be swaped
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
