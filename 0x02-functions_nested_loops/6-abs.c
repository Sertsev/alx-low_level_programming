#include "holberton.h"
/**
 *_abs-prints the absolute value of an integer.
 *Return:returns the abs value.
 *int-gets integer value.
 */

int _abs(int);

int _abs(int a)
{

if (a >= 0)
return (a);
else if (a < 0)
return (a * (-1));

return (0);
}
