#include "main.h"

/**
 * _strlen - This function determines the lenght of a string
 * @s: string to be counted
 * Return: Lenght of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}
