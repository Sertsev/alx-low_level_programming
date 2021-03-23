#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns number of elements in a list
 * @h: the list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
int i;

i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
