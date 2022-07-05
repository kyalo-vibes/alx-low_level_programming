#include "main.h"

/**
 * print_alphabet - prints the whole lowercase alphabet
 * Return: void
 */
void print_alphabet(void)
{
	int l = 'a';
	while (l <= 'z')
		
	{
		_putchar(l);
		l += 1;
	}
	_putchar(10);
}

