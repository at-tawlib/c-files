#include "main.h"

/**
 * main - test files
 *
 * Return: always 0
 */

int main(void)
{
	_printf("The ");
	_putchar(10);

	_printf("%");
	_putchar(10);

	_printf("%%");
	_putchar(10);

	_printf("%c", 'e');
	_putchar(10);

	_printf("%s ", "the boy");
	_putchar(10);

	_printf("the % hel %c oo %% cc %s", 'z', "my guy");
	_putchar(10);

	_printf("");
	_putchar(10);

	_printf("empty %s", "");
	_putchar(10);

	_printf("%d", 1234);
	_putchar(10);

	_printf("char %c, string %s, num %d", 'e', "my string", 345);
	_putchar(10);
	return (0);
}
