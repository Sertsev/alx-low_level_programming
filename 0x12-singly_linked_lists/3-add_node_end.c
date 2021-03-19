#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node at the end of a list
 * @head: the node to be added
 * @str: str to be copied to the str node member
 *
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
int i;
list_t *temp;
list_t *tmp;

i = 0;
temp = malloc(sizeof(list_t));
if (temp == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
}
temp->len = i;
temp->str = strdup(str);
temp->next = NULL;
if (*head == NULL)
{
*head = temp;
}
else
{
tmp = *head;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = temp;
}
return (temp);
}
