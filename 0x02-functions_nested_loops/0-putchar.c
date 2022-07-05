#include "main.h"

/**
 * main - program that prints _putchar
 * Return: int
 */
int main(void)
{
int k = 0;
char str_sol[9] = "_putchar";
while (k < 9)
{
_putchar(str_sol[k]);
k++;
}
_putchar('\n');
return (0);
}

