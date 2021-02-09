#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - print upto 98
 *
 * @n: starting numbe
 *
 * Return: void
 */
void print_to_98(int n)
{
if (n == 98)
{
printf("%d",98);
}
else if (n > 98)
{
while (n > 98)
{
printf("%d, ", n);
n--;
}
printf("%d", 98);
}
else if (n < 98){
while (n < 98){
printf("%d, ",n);
n++;
}
printf("%d", 98);
}
}
