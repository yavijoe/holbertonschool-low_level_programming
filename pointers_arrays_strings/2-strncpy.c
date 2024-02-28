#include "main.h"

/**
 * _strncpy - write a funtion that copies a string
 * @dest: Destination string
 * @src: source string
 * @n: number of characters to copy
 *
 * Return: address of the destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
int a = 0, b = 0;
while (src[b])
{
b++;
}
while (a < n && src[a])
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
