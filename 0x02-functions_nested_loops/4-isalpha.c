#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * Return: 1 if it is a letter otherwise 0
 */
int _isalpha(int c)
{
	int c;
	if((c >= 'a' && c <= 'z') ||
	   (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
