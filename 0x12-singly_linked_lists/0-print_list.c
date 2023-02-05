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

	if (h == NULL)
	{
	printf("[0] (nil)\n");
	}

	struct list_s *ptr = h;

	while (h != NULL)
	{
	printf("[%u] %s\n", ptr->len, ptr->str);
	ptr = ptr->next;
	s++;
	}

	return (s);
}
