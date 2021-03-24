#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in linked list
 * @head: a head pointer of a linked list
 *
 * Return: return the node address where the loop start
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *hare, *tortoise, *current;

if (head == NULL)
return (NULL);
tortoise = head;
hare = head->next;
while (hare != NULL && hare != tortoise)
{
hare = hare->next;
if (hare != NULL && hare != tortoise)
{
tortoise = tortoise->next;
hare = hare->next;
}
}
if (hare == NULL)
{
return (NULL);
}
current = head;
while (1)
{
if (current == hare)
break;
current = current->next;
hare = tortoise->next;
while (hare != tortoise)
{
hare = hare->next;
if (current == hare)
break;
}
}
return (current);
}
