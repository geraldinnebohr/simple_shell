#include "holberton.h"
/**
 * number_line - print line number of execution
 *
 * @line_n: integer line number
 */
void number_line(int line_n)
{
	int x;
	int y;

	if (line_n <= 9)
	{
		_putchar(line_n + '0');

	}
	else
	{
		x = line_n / 10;
		y = line_n % 10;
		_putchar(x + '0');
		_putchar(y + '0');
	}
	_puts(": ");
}
