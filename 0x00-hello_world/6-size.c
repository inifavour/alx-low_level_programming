#include <stdio.h>	

/**
 * main	-  prints the size of various types
 * Return: Always 0
 */
int main(void)
{
	char c;
	int b;
	long int e;
	long long d;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(b));
	printf("Size of a long int: %ld byte(s)\n", sizeof(e));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(d));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
