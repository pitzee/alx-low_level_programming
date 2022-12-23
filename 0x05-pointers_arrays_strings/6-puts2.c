#include "main.h"
/**
 *puts2 - print every other character of a string
 *
 * @str: the value that hold character
 */
void puts2(char *str)
{
	char j;
	while (*str != '\0')

	{
	if (*str % 2 == 0)
	{
	j = *str;
	_putchar(j);
	}
	str++;
	}
	_putchar('\n');
}
