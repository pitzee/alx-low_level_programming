#include "main.h"
/**
 *_strlen - return the length of astringth
 *
 * @s: hold the string length
 *
 *Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
