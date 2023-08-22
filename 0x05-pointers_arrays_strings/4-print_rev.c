#include "main.h"

/**
  * print_rev - prints a string, in reverse, followed by a new line`
  * @s: Input string
  *
  * Return: string in reverse
*/
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
