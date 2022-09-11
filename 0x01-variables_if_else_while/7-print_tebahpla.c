#include <stdio.h>

/**
 *
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)

{
	char bets;

	for (bets = 'z'; bets >= 'a'; bets--)
		putchar(bets);

	putchar('\n');

	return (0);
}
