#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generate random valid passwords for the program 101-crackme
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;

	srand(time(null));

	for (i = 0; i < 100; i++)
	{
