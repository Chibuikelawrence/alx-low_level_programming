#include "main.h"
/**
 * print_numbers - print an integer
 * @n: input integer parameter
 *
 */
void print_line(int n);
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar(43);
		i = -1;

	}
	if (i / 10)

	{
		print_number(i / 10);

	}

	_putchar(i % 10 + '0');
}
