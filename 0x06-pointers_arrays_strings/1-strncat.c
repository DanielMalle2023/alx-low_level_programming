#include "main.h"

/**
 * _strncat - a function that will concatenate two string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of string
 * Return: the pointer dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0 ; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
