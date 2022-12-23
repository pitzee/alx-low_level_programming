#include "main.h"
/**
 * print_rev - is used to print the resversed string
 * @s: used to stor string
 * return: 0
 */
void print_rev(char *s)
{
	int len = 0;
	int p;

	while (*s != '\0')
	{
		len++;
		p++;
	}
	s--;
	for (p = len; p > 0; p--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
