#include "main.h"

/**
 * _strcat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to test
 *
 * Return: addres of dest
*/
char *_strcat(char *dest, char *src)
{
int i, j;
i = j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
