#include "holberton.h"

/**
 * *string_toupper - capitalize astring
 *
 * @str: pointer
 *
 * Return: capitalized string
 */
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] <= 'z' && str[i] >= 'a')
}
return (str);
}
