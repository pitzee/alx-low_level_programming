#include <stdio.h>
#include "lists.h"

/**
 * print_list - print the list
 *
 * @h: going to be replaced by the real value
 *
 * Return: return length
 */


size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
	if (!h->str)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	s++;
	}

	return (s);
}
