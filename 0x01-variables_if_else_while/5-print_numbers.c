#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int nums = 0;

	while (nums < 10)
	{
		printf("%d", nums);
		nums++;
	}
	printf("\n");
	return (0);
}
