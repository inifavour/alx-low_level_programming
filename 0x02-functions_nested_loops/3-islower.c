#include "main.h"

/**
 *
 * _islower - the function checks for lowercase characters
 * @c - checks the character of c if it is lower or uppercase
 * Return: 1 if it is lower case and 0 if it is uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c >= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
