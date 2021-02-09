#include <stdio.h>
#include "holberton.h"

/**
 * _abs - compute absolute value
 *
 * @n: value to compute
 *
 * Return: n, the absolute value of number
 */
int _abs(int n)
{
return (n >= 0 ? n : n * -1);
}
