#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: double pointer to head
 *
 * Return: number of free nodes
 */

size_t free_listint_safe(listint_t **h)
{
listint_t *this;
listint_t *next;
int sub;

register short iter = 0;

if (!h || !(*h))
return (iter);
this = *h;
while (this)
{
sub = this - this->next;
if (sub > 0)
{
next = this->next;
free(this);
this = next;
iter++;
}
else
{
free(this);
*h = NULL;
iter++;
break;
}
}
*h = NULL;
return (iter);
}
