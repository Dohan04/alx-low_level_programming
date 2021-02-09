#include "holberton.h"

/**
 * _isalpha - check alphabet, lowercase or uppercase
 *
 * @c: character to be checked
 *
 *Return: 1 if it's a character, 0 if otherwise
 */
int _isalpha(int c)
{
return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
