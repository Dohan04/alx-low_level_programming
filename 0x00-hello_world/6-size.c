bb#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %i byte(s)\n", sizeof(char));
printif("Size of an int: %i byte(s)\n", sizeof(int));
printf("Size of a long int: %i byte(s)\n", sizeof(long int));
printf("Size of a long long int: %i byte(s)", sizeof(long long int));
printf("Size of a float: %i byte(s)", sizeof(float));
return (0);
}
