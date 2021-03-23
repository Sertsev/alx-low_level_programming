#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to head node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
size_t Nodes = 0;

while (h)
{
Nodes++;
printf("%d", h->n);
h = h->next;
printf("\n");
}
return (Nodes);
}
