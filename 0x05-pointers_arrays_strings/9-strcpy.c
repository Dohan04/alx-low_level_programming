#include "holberton.h"

/**
 * *_strcpy - copies the string pointed to by src
 *
 * @dest: char type string
 *
 * @src: cahr type string
 *
 * Description: copy the string pointed to by pointer `src` to
 *
 * the buffer pointed by `dest`
 *
 * Return: Pointer to `dest`
 */
char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\o');
return (dest);
}
