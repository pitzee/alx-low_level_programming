#include "main.h"
/**
 *_puts - print the string
 *
 *@str: vale stored in str
 *
 *
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');

}
