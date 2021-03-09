#include "dog.h"

/**
 * free_dog - frees a memory block of type dog_t
 * @d: address to the memory block to be freed
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
if (d == NULL)
return;

free(d->name);
free(d->owner);
free(d);
}
