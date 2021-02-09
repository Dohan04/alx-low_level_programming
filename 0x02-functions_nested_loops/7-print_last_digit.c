#include <stdio.h>
#include "holberton.h"

/**
 * print_last_digit - compute and  print last digigt
 *
 * @num: number to be computed
 *
 * Return: last digit of num
 */
int print_last_digi(int n)
{
char ld;
n %= 10;
ld = '0' + n;
_putchar(ld);
return (n);
}
