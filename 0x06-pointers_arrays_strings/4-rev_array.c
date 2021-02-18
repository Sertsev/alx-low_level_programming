#include "holberton.h"

/**
 *reverse_array - a function to reverse array
 *@a: an integer value
 *@n: an integer
 */

void reverse_array(int *a, int n)
{
	int len = 0;
	int tmp;

	n = n - 1;
	while (len <= n)
	{
		tmp = *(a + len);
		*(a + len) = *(a + n);
		*(a + n) = tmp;
		len++;
		n--;
	}
}
