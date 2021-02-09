#include "holberton.h"

/**
 *islower - check lowercase character
 *
 *@c: character to be checked
 *
 * Return: 1 if it is lowercase, 0 if otherwise
 */
int _islower(int c)
{
return (c >= 97 && c <= 122);
}
