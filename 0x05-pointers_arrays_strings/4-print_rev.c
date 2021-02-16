#include "holberton.h"

/**
 * print_rev - prints revesed string, followed by a new line
 *
 * Return: void
 */
void print_rec(char *s)
{
int i = 0;
while (s[i])
i++;
while (i--)
{
_putchar(s[i]);
}
_putchar"'\n");
}
