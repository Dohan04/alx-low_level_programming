#include "holberton.h"
/**
 * puts2 - prints a string followed by a new line
 *
 * @str: point to th estring to print
 *
 * Return: void
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\0');
}
