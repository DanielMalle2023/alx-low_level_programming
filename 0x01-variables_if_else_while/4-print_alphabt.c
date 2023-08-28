#include <stdio.h>

/**
 * main - a program that prints the alphabet in lowercase
 * Print all the letters except q and e
 * followed by a new line
 * Return: always 0
 */

int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		if (x != 'q' && x != 'e')
			putchar(x);
	putchar('\n');
	return (0);
}
