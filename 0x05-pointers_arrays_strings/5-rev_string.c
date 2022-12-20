#include "main.h"
/**
 * rev_string - print string in reverse
 *
 * @s: the value of each character is stored
 *
 */
void rev_string(char *s)
{
	int p;

	for (p = 10; p >= 0; p--)
	{
	_putchar(s[p]);
	}
}
