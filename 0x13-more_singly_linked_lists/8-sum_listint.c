#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head node of a listint_t linked list
 *
 * Return: sum of n in linked list or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;

while (current)
{
sum += current->n;
current = current->next;
}
return (sum);
}
