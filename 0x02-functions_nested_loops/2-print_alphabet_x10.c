#include "main.h"

/**
 * print_alphabet - prints the whole lowercase alphabet
 * Return: void
 */
void print_alphabet(void)
{
		int n = 0;

		while (n < 10)
		{
			char l = 'a';
			while (l <= 'z')	
			{
				_putchar(l);
				l++;
			}
		_putchar(10);
}


