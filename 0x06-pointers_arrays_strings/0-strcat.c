#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer to destination string.
 * @src: pointer to source string.
 *
 * Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	int s1_length = strlen(dest);
	int s2_length = strlen(src);
	int size = s1_length + s2_length + 1;
	char *s = calloc(size, sizeof(char));

	for (int i = 0; i < s1_length; i++)

		s[i] = dest[i];
	for (int i = 0; i < s2_length; i++)
		s[s1_length + 1] = src[i]
			s[size - 1] = '\0';
	return (s);
}
