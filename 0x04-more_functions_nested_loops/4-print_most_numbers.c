#include "main.h"

/**
 * print_most_numbers - print numbers   (0 through 9) except 2 & 4.
 */
void print_most_numbers(void)
{
	int p;

	for (p = 48; p < 58; p++)
	{
	if (p != 50 && p != 52)
	{
	_putchar(p);
	}
	}
	_putchar('\n');
}
