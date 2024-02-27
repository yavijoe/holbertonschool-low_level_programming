#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;

	str = "0123456789";
	puts_half(str);
	return (0);
}

/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Print the second half of the string */
	for (i = length / 2; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

