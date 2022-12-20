#include "main.h"
/**
 *puts2 - print every other character of a string
 *
 * @str: the value that hold character
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; i <= 11; i++)
	{
	if (i % 2 == 0)
	{
	_putchar(str[i]);
	}
}
	_putchar('\n');
}
