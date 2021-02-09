#include <stdio.h>
#include "holberton.h"

/**
 * print_alphabet - function to print alphabet in lower case
 * followed by a new line
 *
 * Return: Void
 */
void print_alphabet(void)
{
char p;
for (p = 'a'; p <= 'z'; p++)
{
_putchar(p);
}
_putchar('\n');
}
