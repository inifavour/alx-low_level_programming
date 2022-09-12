#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0
 */
int main(void)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)

	{
		putchar(m);
	}

	for (m = 'A'; m <= 'Z'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
