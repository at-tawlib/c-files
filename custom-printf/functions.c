#include "main.h"

/**
 * _print_string - prints a string followed to stdout
 * @str: string to print out
 */
void _print_string(char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; ++i)
	{
		_putchar(str[i]);
	}
}

/**
 * print_number - prints an integer
 * @n: integer to print
 */
void _print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else if (n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 1000)
	{
		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar((n % 100) % 10 + '0');
	}
	else if (n < 10000)
	{
		_putchar(n / 1000 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar((n % 100) % 10 + '0');
	}
}
