#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{

	}

	for (len2 = 0; src[len2] != '\n'; len2++)
	{

	}
	for (i = 0p i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}

	return (dest);
}
