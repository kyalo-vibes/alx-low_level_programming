#include "main.h"

/**
 * print_alphabet - prints the whole lowercase alphabet
 * Return: void
 */

void print_alphabet(void)
{
	char l = 'a';
	
	while (l <= 'z')
	{
		_putchar(l);
		l ++;
	}
		_putchar(10);
}

